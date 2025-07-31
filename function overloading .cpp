#include"bits/stdc++.h"
using namespace std;
class rajan{
public:
void fun()
{
    cout<<"this is function with no arguments"<<endl;

}
    void fun(int x){
        cout<<"function with int agrgument"<<endl;

}
    void fun(double x){
        cout<<"function with double argument "<<endl;
}
};
int main(){
rajan obj;
obj.fun();
obj.fun(9);
obj.fun(9.2);

}



