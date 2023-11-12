Problem Statement



Design a data store system that can manage a collection of integers. The system allows the addition and removal of integers. There are three key constructors used in this system:



Default Constructor (datastore()): Initialize an empty data store with no integers.



Copy Constructor (datastore(const datastore& old_datastore)): Create a copy of an existing data store, including all its integers. This constructor allows the duplication of data stores.



Destructor (~datastore()): Ensure that when a data store is destroyed, it is empty. If not, raise an error to indicate a non-empty data store.



Key Features:



Initialize a data store that can store integers.
Add integers to the data store.
Create a copy of the data store using the copy constructor.
Remove integers from both the original and copied data stores.
Handle errors if attempting to remove from an empty data store.


Note: This kind of question helps in clearing AMCAT tests.

Input format :
The first line consists of the number of elements to be added to the data store.

The next set of lines will be the actual input elements to be added to the data store.

This will be followed by the number of elements to be deleted from the first data store.

This is then followed by the number of elements to be deleted from the second data store.

Output format :
If the number of elements popped from the first datastore is equal to the number of elements added, then print "Success", else the output should display "Error: Destroying a nonempty datastore".

The same goes for the second data store.

Sample test cases :
Input 1 :
5
1
2
3
4
5
2
2
Output 1 :
Error: Destroying a nonempty datastore
Error: Destroying a nonempty datastore
Input 2 :
5
1
2
3
4
5
5
5
Output 2 :
Success
Success




#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 100;


class datastore
{
private:
  int count;			// Number of items in the datastore
  int data[SIZE];		// The items themselves
public:
// Initialize the datastore
    datastore ();
//Check if there are any elements before you delete
   ~datastore ();
// Push an item on the datastore
  void add (const int item);
// Pop an item from the datastore
  int del (void);
//create a stack from another datastore
    datastore (const datastore &);
    int getCount();
};

datastore::datastore (void)
{
  count = 0;			// Zero the datastore
}

void
datastore::add (const int item)
{
  data[count] = item;
  ++count;
}

int
datastore::del (void)
{
// datastore goes down by one
  --count;
// Then we return the top value
  return (data[count]);
}

datastore::datastore (const datastore& old_datastore)
{
  
  int i;			// Index used to copy the data
  for (i = 0; i < old_datastore.count; ++i)
    {
      data[i] = old_datastore.data[i];
    }

  count = old_datastore.count;
}


int datastore::getCount(){
    return count;
}

datastore::~datastore ()
{
  if (count != 0)
    cout << "Error: Destroying a nonempty datastore"<<endl;
  else
    cout <<"Success"<<endl;
}

int
main ()
{
  datastore a_datastore;
  int inputCount,val,apopCount,bpopCount;
  cin>>inputCount;
  for (int i=0;i<inputCount;i++){
      cin>>val;
      a_datastore.add(val);
      
  } 
  datastore b_datastore (a_datastore);
  cin>>apopCount;
  for (int i=0;i<apopCount;i++){
     
      a_datastore.del();
      
  } 
  
  cin>>bpopCount;
  for (int i=0;i<bpopCount;i++){
      b_datastore.del();
      
  } 
 
  return 0;
}
