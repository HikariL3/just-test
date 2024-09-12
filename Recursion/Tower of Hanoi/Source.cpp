#include<iostream>
using namespace std;
int n;
char a, b, c;
void towerofHN(int n, char a, char b, char c) {
	if (n == 1) {
		cout << a << "->" << c << endl;
		return;
	}
	towerofHN(n - 1, a, c, b);
	towerofHN(1, a, b, c);
	towerofHN(n - 1, b, a, c);
}

int main() {
	freopen("TowerofHN.inp", "r", stdin);
	freopen("TowerofHN.out", "w", stdout);
	a = 'A'; b = 'B'; c = 'C';
	cin >> n;
	towerofHN(n, a, b, c);
	return 0;
}