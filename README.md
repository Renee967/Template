# Template

Write a template-based class that implements a set of items.  Set - is a collection of unique elements. The class should allow the user to:

- Add a new item to the set

- Get the number of items in the set

Test your class by creating sets of different data types (e.g. integers, strings, etc.)

 

Please use the following class template to finish the program.

#define MAX 100

 

class Set

{

public:

Set();

void add(int newItem); // Add new item to the set (definition should be outside of the class)

int getSize(); // Return size of set (definition should be outside of the class)

private:

int numOfelements; 

int data[MAX];

};
