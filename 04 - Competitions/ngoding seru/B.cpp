#include <bits/stdc++.h>
using namespace std;

int n;
int a[4];

int main(){
	cin >> n;
	a[0] = (n/3600); n = n-(n/3600)*3600;
	a[1] = (n/60); n = n-(n/60)*60;
	a[2] = n;
	for (int i = 0 ; i < 3 ; i++) 
		cout << a[i] << '\n';
	return 0;
}