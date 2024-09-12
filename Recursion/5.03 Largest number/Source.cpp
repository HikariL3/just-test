#include <iostream>
#include <iomanip>
using namespace std;

int largest_input() {
    int num;
    cin >> num;

    if (num == 0) {
        return num;
    }

    int largest = largest_input();
    cout << num << " " << largest << endl;
    return (num > largest) ? num : largest;
}
int main() {
    cout << largest_input();
    return 0;
}