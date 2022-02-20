#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
} obj1, obj2;

struct friends
{
    string name;
    int age;
    student link;
} charlie, homes;

int main()
{
    friends * pfriends = &charlie;

    charlie.name;
    homes.link.name;
    pfriends -> link.age;
    return 0;
}