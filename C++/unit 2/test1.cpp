Alexa is building a system to manage library books. She wants to check whether the given book is available within the given price range or not. Since she is struck with other work, she is unable to focus on this. Help her write a program that will solve her problem using void pointer. Your program should take the price of the book and availability (Yes or No) as inputs.



The price should be a positive float value.
The availability status should be Y, y for Yes and N, n for no.
The book is said to be in the given range if 0 < price < 2500.50 and the availability status is Yes (Y or y).


Display appropriate messages for everything.



Note: This is a sample question asked in an HCL interview.

Input format :
The first line of input consists of the price of the book as a float value.

The third line of input consists of the availability status of the book(Y, y, N, or n).

Output format :
The output prints Yes if the inputs are valid and in the given range.

The output prints No if the inputs are not valid and not in the given range.

Code constraints :
0 < price < 2500.50

The availability status should be either Y, y, N, or n only.

Sample test cases :
Input 1 :
2300.50
y
Output 1 :
Yes
Input 2 :
-89.90
s
Output 2 :
No


#include <iostream>
#include <cctype>
using namespace std;

void checkBookAvailability(void* pricePtr, void* availabilityPtr) {
    float price = *(float*)pricePtr;
    char availability = *(char*)availabilityPtr;
    if (price > 0 && price < 2500.50 && tolower(availability) == 'y')
        cout << "Yes";
    else
        cout << "No";
}

int main() {
    float price;
    char availability;

    cin >> price;
    cin >> availability;

    checkBookAvailability(&price, &availability);

    return 0;
}
