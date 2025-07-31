#include<iostream>
using namespace std;
int mian ()

{
    struct
    {
        string brand ;
        string model;
        int year;

    }
    mycar1,mycar2;
    mycar1.brand = "bmw";
    mycar1.model = "Q3";
    mycar1.year = 19999;

    mycar2.brand = "ford";
    mycar2.model = "mustang";
    mycar2.year = 1987;
    cout<<mycar1.brand<<mycar1.model<<mycar1.year<<endl;
    cout<<mycar2.brand<<mycar2.model<<mycar2.year<<endl;
    return 0;
 }

