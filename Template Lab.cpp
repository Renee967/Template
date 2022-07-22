/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#define MAX 100
// define MAX = 100

#include <iostream>

using namespace std;
// using template class

template<class T>

class Set

{
    // public member functions

public:
    // default constructor 

	Set();

	void add(T newItem); // Add new item to the set (definition should be outside of the class)

	int getSize(); // Return size of set (definition should be outside of the class)
        // if numOfelements is less than MAX
        // add it to set

private:

	int numOfelements;

	T data[MAX];

};

template<class T>

Set<T>::Set() {

	numOfelements = 0;

}

template<class T>

void Set<T>::add(T newItem)

{

	if (numOfelements == 0)

	{

		data[numOfelements] = newItem;

		numOfelements++;

	}

	else

	{

		bool flag = false;

		for (int i = 0; i < numOfelements; i++)

		{

			if (data[i] == newItem)

			{

				flag = true;

			}

		}

		if (!flag) {

			data[numOfelements] = newItem;

			numOfelements++;

		}

	}

}

template <class T>

int Set<T>::getSize() { return numOfelements; }

// main function
// testing above class member function


int main()

{

	Set<int> set1;

	set1.add(1);

	set1.add(2);

	set1.add(3);

	set1.add(1);



	cout << set1.getSize() << endl;

}

