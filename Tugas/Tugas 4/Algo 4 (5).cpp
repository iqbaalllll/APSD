#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah baris: ";
    cin >> n;

    int sum = 0;
    int start = 10;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (j > 0) {
                cout << " + ";
            }
            cout << start - 2 * j;
            sum += start - 2 * j;
        }
        cout << " = " << sum << endl;
    }

    return 0;
}