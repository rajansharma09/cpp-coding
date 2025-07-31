#include<iostream>
using namespace std;
int main()
{
    int cp;

        cout<<"enter cost price:";
        cin>>cp;
    int sp;
        cout<<"enter selling price:";
        cin>>sp;

    if(cp<sp){
        cout<<"make profit";
    }
    else if(cp>sp)
    {
        cout<<"make loss";
    }
    else{
        cout<<"no profit no loss";
    }
}
