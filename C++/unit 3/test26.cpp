You are given a program that manages an inventory of items. The program allows you to set up the inventory by inputting the item details and stores them in a binary file. You can then fetch the details of a specific item based on the provided record number.



Your task is to provide inputs to set up the inventory with item details and fetch the item details based on the provided record number.



Write a program that:

a) Takes input to set up the inventory by providing the following information:

			-The number of items in the inventory.

			-For each item, provide the following inputs:

				-A string representing the item name (up to 20 characters).

				-An integer representing the quantity of the item.

				-A double representing the cost of the item.

b) Allows the user to input a record number.

c) Fetches the item details based on the provided record number from the binary file.

d) Displays the fetched item details, including the item name, quantity on hand, and cost.



Note: This question helps in clearing HCL tests.

Input format :
The first line of input consists of an integer numItems representing the number of items in the inventory.

This is followed by numItems sets of inputs, each representing an item in the inventory.

For each item, you need to provide the following inputs in order:

-A string representing the item name (up to 20 characters).

-An integer representing the quantity of the item.

-A double representing the cost of the item.

After providing the item details, you need to provide a single integer recordNum representing the record number of the item you want to fetch.

Output format :
The program will display the details of the fetched item based on the provided record number.

The output will include the item name, quantity on hand, and cost.

Sample test cases :
Input 1 :
4
Hammers
3
9.99
Pliers
12
7.85
Wrenches
19
2.75
Mallets
1
19.99
2
Output 1 :
Item: Wrenches
Quantity on hand: 19
Cost: 2.75





#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class Inventory {
public:
  char item[20];
  int quantity;
  double cost;

  void setData(const char* itemName, int itemQuantity, double itemCost) {
    strcpy(item, itemName);
    quantity = itemQuantity;
    cost = itemCost;
  }
};

int setup() {
  ofstream fout;
  fout.open("InvDat.dat", ios::out | ios::binary);
  if (!fout) {
    return 1;
  }

  int numItems;
  cin >> numItems;
  cin.ignore();

  Inventory* inv = new Inventory[numItems];

  for (int i = 0; i < numItems; i++) {
    char itemName[20];
    int itemQuantity;
    double itemCost;

    cin.getline(itemName, 20);

    cin >> itemQuantity;
    cin.ignore();

    cin >> itemCost;
    cin.ignore();

    inv[i].setData(itemName, itemQuantity, itemCost);
    fout.write(reinterpret_cast<const char*>(&inv[i]), sizeof(Inventory));
  }

  fout.close();
  delete[] inv;
  return 0;
}

int main() {
  setup();

  long recordNum, numItems;
  cin >> recordNum;

  if (recordNum < 0 || recordNum >= numItems) {
  //cout << "Record numbers must be between 0 and " << numItems - 1 << ".\n";
  return 0;
}

  ifstream fin("InvDat.dat", ios::in | ios::binary);
  if (!fin) {
 //   cout << "Cannot open file.\n";
    return 0;
  }

  Inventory entry;
  fin.seekg(sizeof(Inventory) * recordNum, ios::beg);
  fin.read(reinterpret_cast<char*>(&entry), sizeof(Inventory));
  fin.close();

  cout << "Item: " << entry.item << endl;
  cout << "Quantity on hand: " << entry.quantity << endl;
  cout << "Cost: " << entry.cost;

  return 0;
}