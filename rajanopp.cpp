#include<iostream>
using namespace std;
class Area_shape
{
public:
    void area(int ,int );
    void area(int);
    void area(float);

};
void Area_shape ::area(int l,int b)
{
    cout<<"area of ractangle"<<l*b<<endl;
}
void Area_shape::area(int a)
{
    cout<<"area of square"<<a*a<<endl;
}
void Area_shape::area(float r)
{
    cout<<"areanof circle"<<3.14*r*r<<endl;
}
int main ()
{
    Area_shape a;
    a.area(10,20);
    a.area(10);
    a.area(float(10));
    return 0;
}
