#include <bits/stdc++.h>
using namespace std;

int a,b,c;

int main(){
	cin.tie(0);
	for (int i = 0; i < 4 ; i++) {
		cin >> c;
		a += c;
	}
	for (int i = 0 ; i < 4 ; i++) {
		cin >> c;
		b += c;
	}
	if (a==b) puts("tie");
	else if (a>b) puts("Gunnar");
	else puts("Emma");
	return 0;
}