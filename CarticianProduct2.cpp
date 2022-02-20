#include<iostream>
using namespace std;

class Vector
{
    public:
    int x;
    int y;
   // public:
    Vector(){}
    Vector(int a,int b) : x(a),y(b){}
};

Vector operator+ (const Vector &lhs,const Vector &rhs)
{
    Vector temp;
    temp.x=lhs.x+rhs.x;
    temp.y=lhs.y+rhs.y;
    return temp;
}

int main()
{
    Vector obj(3,4);
    Vector obj2(1,2);

    Vector result;
    result=obj+obj2;// the address of the obj1 and obj2 is being passed to the operator+ function in the lhs and rhs 
    cout<<result.x<<","<<result.y<<endl;
    return 0;
}