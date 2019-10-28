#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int A[20005];
int ans;

bool comp(int a,int b){
	return a>b;
}

int main(){
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) 
			cin >>A[i];
		sort(A,A+n,comp);
		ans = 0;
		for (i = 2 ; i < n ; i+=3) {
			ans+=A[i];
		}
		cout << ans << endl;
	}
	return 0;
}