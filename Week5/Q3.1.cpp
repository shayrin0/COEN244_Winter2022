#include <iostream> 
using namespace std;


class Parent {

public:

    Parent() {};

    void printOne() { cout << "one\n"; }

    void printTwo() { cout << "two\n"; }
};


class Child:private Parent {

public:

    Child() {};

    void printThree() { cout << "three\n"; }
};


int main() {


    Child c;

    c.printThree();

    c.printOne();

    

    return 0;
}