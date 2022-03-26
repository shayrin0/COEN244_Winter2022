#include <iostream>
using namespace std;
 
template <typename T>
void fun(const T &x)
{
    static int count = 0;
    cout << "x = " << x << " count = " << count << endl;
    ++count;
    return;
}
 
int main()
{
    fun<int> (1); // x = 1 count = 0
    cout << endl;
    fun<int>(1);  // x = 1 count = 1
    cout << endl;
    fun<double>(1.1); // x = 1.1 count = 0
    cout << endl;
    fun<int>(1);  // x = 1 count = 2
    cout << endl;
    fun<float>(1.5);  // x = 1.5 count = 0
    cout << endl;
    
//    The difference between ++a and a++
//    int a = 0;
//    int b = 0;
//    
//    b = a++;
//    cout << a << " " << b << endl;
//    
//    a = 0;
//    b = 0;
//    b = ++a;
//    cout << a << " " << b << endl;
    
    return 0;
}
