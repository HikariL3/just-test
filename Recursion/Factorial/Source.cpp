#include<iostream>
using namespace std;
long long giaithua(int n) {
	int t;
	if (n == 0 || n == 1) return 1;
	else return n*giaithua(n-1);//ko can else
	/* else giaithua(n-1);
	* t=giaithua(n-1)*n;
	* return t;
	*/
}
int main() {
	int a;
	cin >> a;
	cout<<giaithua(a);
	return 0;
}