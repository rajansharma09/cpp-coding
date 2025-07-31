#include <iostream>
using namespace std;
class Car {
;bool startengine%2=0 ;
public:
    void start (){

  // startengine=true;
    cout<<"engine started:"<<endl;

    }
    void drive(){
    if(startengine){

        cout<<"drive";
    }else{
    cout<<"can't drive";
    }
    }
};
main(){
Car c;
c.start();
c.drive();
}
