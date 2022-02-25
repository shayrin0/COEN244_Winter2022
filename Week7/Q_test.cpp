
You want to add the length, width and breadth of 2 boxes
create a class BOX, 

write the set and get functions
write the constructor and destructor
create an overloaded constructor

class Box
{
private:
    double length;
    double width;
    double breadth;
    
public:
    Box();
    
    void set_width(double width);
    void set_height(double height);
    void set_breadth(double breadth);
    
    double get_width(void);
    double get_height(void);
    double get_breadth(void);
}

Box::Box()
{
    width = 0;
    height = 0;
    breadth = 0;
}

void set_width(double width)
{
    this->width = width;
}

void set_height(double height)
{
    this->height = height;
}

void set_breadth(double breadth)
{
    this->breadth = breadth;
}

double get_width(void)
{
    return width;
}

double get_height(void)
{
    return height;
}

double get_breadth(void)
{
    return breadth;
}
