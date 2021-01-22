#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,t,i,j;

int main(){
	OPTIMASI
	cin >> n >> t;
	if (n==1 && t==10) cout << -1 ;
	else if (t<=9)
		for (i = 0 ; i < n ; i++)
			cout << t ;
	else 
		for (i = 0 ; i < n ; i++){
			cout << (i==n-1?'0':'5');
		}
	cout << '\n';
	return 0;
}