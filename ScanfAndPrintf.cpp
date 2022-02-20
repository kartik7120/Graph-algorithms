#include<iostream>
using namespace std;

int main()
{
    int a;double b;float c;char d;long e;
    scanf("%d %lf %f %c %ld",&a,&b,&c,&d,&e);// %d for int, %lf for double, %f for float, %c for char, %ld for long
    cout<<"No.1"<<endl;
    printf("%d %lf %f %c %ld",a,b,c,d,e);
    cout<<"No.2"<<endl;
    printf("%d\n%lf\n%f\n%c\n%ld\n",a,b,c,d,e);
    cout<<"No.3"<<endl;
    printf("%d\n %lf\n %f\n %c\n %ld\n",a,b,c,d,e);
    return 0;
}