#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 36, 6, 7};
    int *ptr = arr;
    cout<<*(ptr++)<<endl;
    cout<<*(ptr + 2)<<endl;
    cout<<*(++ptr)<<endl;
    cout<<*(ptr--);
    return 0;
}
