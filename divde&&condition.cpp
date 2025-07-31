#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"divisible by 3 and 5";

    }
    else {
        cout<<"not divisible by 3 and 5";
    }
}


