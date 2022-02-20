#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    bool istime(Rectangle &dummy);
};

bool Rectangle ::istime(Rectangle &dummy)
{
    if (this == &dummy)
        return true;
    else
        return false;
}

int main()
{
    Rectangle obj;
    Rectangle *ptr;
    ptr = &obj;
    if (ptr->istime(obj))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}