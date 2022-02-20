// constructor on const object
#include <iostream>
using namespace std;

class MyClass
{
public:
    int x;
    MyClass(int val) : x(val) {}
    int get() const { return x; }
};

int main()
{
    const MyClass foo(10);
    // foo.x = 20;            // not valid: x cannot be modified
    cout << foo.x << '\n'; // ok: data member x can be read
    cout << foo.get() << endl;
    return 0;
}

/*
The member functions of a const object can only be called if they are themselves specified as const members; 
in the example above, member get (which is not specified as const) cannot be called from foo. To specify that a member is a const member, 
the const keyword shall follow the function prototype, after the closing parenthesis for its parameters:

 
int get() const {return x;}
*/