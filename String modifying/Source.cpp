//Delete all space at the beginning or the end of the string
//If there are multiple space letters between words, leave only one space letter.

#include<iostream>
#include<string>
using namespace std;
string st, st1;
int n;

int main() {
	getline(cin, st);
	n = st.length();
	st =  st + ' ';
	st1 = "";
	for (int i = 1; i <= n; i++)
		if ((st[i] != ' ') or (st[i] == ' ' and st[i - 1] != ' '))
			st1 = st1 + st[i];
	n = st1.length();
	if (st1[n - 1] == ' ') st1.erase(n - 1, 1);
	cout << st1;
	return 0;
}