 #include<iostream>
using namespace std;
class A
{
public:
    virtual void show()=0;
    void disp()
    {
        cout<<"hi i am base class";

    }
};
class B:public A
{

public:
    void show ()
    {
        cout<<"hi i am derived class";

    }
};
int main()
{

    B ob;

    ob.show();

}
