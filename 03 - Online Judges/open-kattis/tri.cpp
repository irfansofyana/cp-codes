#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int a,b,c;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin >> a >> b >> c;
	if (a==b+c) {
		cout << a << '=' << b << '+' << c << '\n';
		return 0;
	}
	else if (a==b-c) {
		cout << a << '=' << b << '-' << c << '\n';
		return 0;
	}
	else if (a==b*c) {
		cout << a << '=' << b << '*' << c << '\n';
		return 0;
	}
	else if (a==b/c) {
		cout << a << '=' << b << '/' << c << '\n';
		return 0;
	}
	else if (a+b==c) {
		cout << a << '+' << b << '=' << c << '\n';
		return 0;
	}
	else if (a-b==c){
		cout << a << '-' << b << '=' << c << '\n';
		return 0;
	}
	else if (a*b==c) {
		cout << a << '*' << b << '=' << c << '\n';
		return 0;
	}
	else if ((a/b)==c) {
		cout << a << '/' << b << '=' << c << '\n';
		return 0;
	}
	return 0;
}