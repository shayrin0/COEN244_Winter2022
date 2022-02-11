#include <iostream> 
using namespace std;

// base class 
class FirstLevel
{
public:

    // base class constructor 
    FirstLevel()
    {
        cout << "First Level Constructor " << endl;
    }

    void setLevel(int level)
    {
        this->levelID = level;
    }

    int getLevel()
    {
        return this->levelID;
    }

    ~FirstLevel()
    {
        cout << "First Level Destructor" << endl;
    }

private:
    int levelID;
   
};

// SecondLevel class 
class SecondLevel : public FirstLevel
{
public:

    //sub class constructor 
    SecondLevel()
    {       
        
        cout << "Second Level Constructor " << endl;
    }

    ~SecondLevel()
    {
        cout << "Second Level Destructor " << endl;
    }
};

// ThirdLevel class 
class ThirdLevel : public SecondLevel
{
public:

    //sub class constructor 
    ThirdLevel()
    {

        cout << "Third Level Constructor " << endl;
    }

    ~ThirdLevel()
    {
        cout << "Third Level Destructor " << endl;
    }
};



// main function 
int main() {

    FirstLevel flob;

    flob.setLevel(1);

    cout << "First Level value = " << flob.getLevel() << endl;


    SecondLevel slob;

    slob.setLevel(2);

    cout << "Second Level value = " << slob.getLevel() << endl;

    ThirdLevel tlob;

    tlob.setLevel(3);

    cout << "Second Level value = " << tlob.getLevel() << endl;

    return 0;
}