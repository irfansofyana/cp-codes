#include <bits/stdc++.h>
using namespace std;

string dummy;
int n,m,i,j,x,y;
int A[1005];
pair<int,int> renj[1005];
int frek[1005];
int ans[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int mm;
	cin >> dummy >> mm; 
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> A[i] >> x >> y;
		renj[i] = make_pair(x,y);
		frek[A[i]]++;
	}
	
	for (i = 1 ; i <= 1000; i++) {
		frek[i] += frek[i-1];
	}
	
	for (i = 0 ; i < n ; i++) {
		ans[frek[A[i]-1]] = i+1;
	}
	
	for (i = 0 ; i < n ; i++) {
		cout << ans[i];
		cout << (i==n-1?'\n':' ');
	}
	return 0;
}