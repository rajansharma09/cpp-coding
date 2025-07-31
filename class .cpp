
#include <iostream>
using namespace std;
class person {
int age ;
string name;
string address;
public:
    void input (){//atribute
    cout<<"enter age :";
    cin>>age;
    cout<<"enter name :";
    cin>>name;
    cout<<"enter address :";
    cin>>address;
    }
    void show(){//function
    cout<<"age :"<<age<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"address:"<<address<<endl;
    }
};
main(){
person ankit ,rohit,raju;
ankit.input();
ankit.show();
rohit.input();
rohit.show();
raju.input();
raju.show();

}
