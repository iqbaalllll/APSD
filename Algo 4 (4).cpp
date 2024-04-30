#include <iostream>
using namespace std;

int main() {
    long product = 1;
    for (int i = 1; i <= 9; i += 2) {
        product *= i;
        cout << i << (i == 9 ? " = " : " * ");
        cout << product << " ";
    }
    cout << endl;
return 0;
}