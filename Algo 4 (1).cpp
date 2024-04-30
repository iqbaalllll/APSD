#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 2; i <= 20; i += 2) {
        sum += i;
        cout << i << (i == 20 ? " = " : " + ");
    }
    cout << sum << endl;
    return 0;
}
