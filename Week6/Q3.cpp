#include<iostream>
#include<string>
using namespace std;

class Animal {
public:
	Animal(){}
	
	virtual void show()
	{
		cout << "animal ";
	}

	virtual void eat()=0; // pure function

};

class Cat : public Animal {
private:
	string type;
	string color;

public:

	Cat() {}

	Cat(string type, string color)
	{
        this->type = type;
        this->color = color;
//		setType(type);
//		setColor(color);
	}

	void setType(string type)
	{
		this->type = type;
    }

	string getType()
	{
		return type;
	}

	void setColor(string color)
	{
		this->color = color;
	}

	string getColor()
	{
		return color;
	}

    void show()
	{
        cout << "Cat of type " << type << " and color is " << color << endl;
//		cout << "Cat of type " << getType() << " and color is " << getColor() << endl;
	}

	void eat()
	{
		cout << "Cat like to eat tuna fish" << endl;
	}

};


class Dog : public Animal {
private:
	string type;
	string color;

public:

	Dog() {}

	Dog(string type, string color)
	{
		setType(type);
		setColor(color);
	}

	void setType(string type)
	{
		this->type = type;
	}

	string getType()
	{
		return type;
	}

	void setColor(string color)
	{
		this->color = color;
	}

	string getColor()
	{
		return color;
	}

	void show()
	{
		cout << "Dog of type " << getType() << " and color is " << getColor() << endl;
	}

	void eat()
	{
		cout << "Dog like to eat meat"<<endl;
	}

};


int main()
{
	Animal* c1 = new Cat("Van", "White");

	c1->show();
	c1->eat();

	Animal* d1 = new Dog("Germen Shepered", "Brown");

	d1->show();
	d1->eat();

	return 0;
}
