#include <iostream>
#include <string>

using namespace std;
void binary(int n) {
	if (n == 0) {
		cout << 0;
		return;
	}
	binary(n / 2);
	cout << n % 2;
}

int main() {
	int a;
	cin >> a;
	binary(a);
	return 0;
}
