#include <iostream>
using namespace std;

struct st1
{
    union u1
    {
        double dollar;
        int yen;
    } price;
} book1;

struct book2_t {
  char title[50];
  char author[50];
  union {
    float dollars;
    int yen;
  };
} book2;

//struct st2
//{
//    union u2 // Anonymous union and it's members can be accessed directely by using book2 object
//    {
//        double dollar;
//        int yen;
//    };
//} book2;

int main()
{
    // first union
    book1.price.dollar=3.014;
    book1.price.yen=500;
    cout<<book1.price.dollar<<endl;
    cout<<book1.price.yen<<endl;


    //second union

    book2.dollar=400;
    book2.yen=1000;
    cout<<book2.dollar<<endl;
    cout<<book2.yen<<endl;
    return 0;
}