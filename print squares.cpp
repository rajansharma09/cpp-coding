#include <iostream>
using namespace std;

int main() {
    int num = 1;
    int max;
    cout<<"enter max";
    cin >> max;

    while (num <= max){
       cout << num * num << " ";
       num++;
    }
    return 0;
}
