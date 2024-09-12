
#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int a = 1; a <= i - 1; a++) {
            cout << ' ';
        }
        for (int b = 2 * i -1 ; b <= 2 * n - 1; b++) {
            cout << '*';
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++) {
        for (int a = 1; a <= n - i; a++) {
            cout << ' ';
        }
        for (int b = 1; b <= 2 * i - 1; b++) {
            cout << '*';
        }
        cout << endl;
    }
}