#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1;
    cin >> num;
    do {
        factorial *= num;
        num--;
    } while (num > 0);
    cout << factorial;
    return 0;
}
