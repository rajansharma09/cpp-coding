#include<iostream>
using namespace std;
class encap{
    int age;//this is private mamber
public:
    string name;
    void setvalue(int a){// declare private function into inheritate
    age = a;
    cout<<age<<endl;
    }
};
main(){
encap E;
E.name="rajan";
E.setvalue(22);
cout<<E.name;
}
