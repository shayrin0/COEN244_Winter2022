

#include <iostream>
#include <vector>

using namespace std;

int getSum(vector<int> vect)
{
	int sum = 0;
	
	for (auto it = vect.begin(); it != vect.end(); it++)
	{
		sum += *it;
	}

	return sum;
}

int main()
{
    vector<int> v;
    
//    Insert even numbers between 1 and 20 to the vector​
    for (int i=1; i<=20; i++)
        if (i%2==0)
            v.push_back(i);
    
    cout << "Size : " << v.size();
    cout << "\nCapacity : " << v.capacity();
    cout << "\nMax_Size : " << v.max_size();
    
    cout << sizeof(long) << endl;
    
//Create an Iterator using STL to iterate through the vector 
//  and print all its elements​
    cout << "Print all elements of the Vector​ " << endl;
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
//
//Iterate through the vector to prints its 
//elements in the reverse order​
    cout << "Print all elements of the Vector​ in reverse format " << endl;
    for(auto it = v.rbegin(); it != v.rend(); it++)
    {
        cout << *it << endl;
    }

//Create a function called getSum that takes the vector 
// as a reference and​
//  returns the summation of the vector elements
    cout << "sum of the vector elements = " << getSum(v) << endl;
    
    return 0;
}

