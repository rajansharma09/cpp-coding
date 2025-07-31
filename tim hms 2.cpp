#include<iostream>
using namespace std;
class time
{

    int hour ;
    int minutes ;
    int sec;
public:
    time(){
    hour=0;
    minutes=0;
    sec=0;
    }
    time(int h, int m,int s)
    {

        hour = h;
        minutes= m;
        sec=s;

    }
    void setHour(int h)
    {
        hour=h;
    }
    void setMinutes(int m)
    {
        minutes = m;
    }
    void setSec(int s)
    {
        sec=s;
    }
    int getHour ()
    {
        return hour;
    }
    int getMinutes()
    {
        return minutes;
    }
    int getSec()
    {
        return sec;
    }
    void Display()
    {
        cout<<hour<<":"<<minutes<<":"<<sec;

    }
};
int main()
{

    int h,m,s;
    cout<<"enter Hpurs:";
    cin>>h;
    cout<<"enter Minutes:";
    cin>>m;
    cout<<"enter Secondes:";
    cin>>s;
    cout<<endl;
    time obj(h,m,s);
    obj.Display();
    return 0;
}
