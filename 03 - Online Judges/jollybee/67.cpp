#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); 

using namespace std;

int t,n,i,j;
int a,b,c;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;
		cout << (c>2000?(a+((c-2000)/100)*b):a) << '\n';
	}
	return 0;
}