#include <bits/stdc++.h>
using namespace std;

const string acuan="ROYG";
int i,j,n;
string s;

int main(){
	cin.tie(0);
	cin >> n;
	if (n==7) puts("ROYGBIV");
	else {
		n-=3;
		for (i = 0 ; i<(n/4) ;i++) 
			cout << acuan ;
		for (i = 0 ; i<n%4; i++) 
			cout << acuan[i];
		cout << "BIV" << endl;
	}
	return 0;
}