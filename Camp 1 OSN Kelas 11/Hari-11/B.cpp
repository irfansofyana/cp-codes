#include <bits/stdc++.h>
using namespace std;

int n,k,i,j;
int sum,ans;
int A[10005];

int main(){
	cin.tie(0);
	while (cin >> n && n!=-1) {
		sum = 0; ans = 0;
		for (i = 0 ; i < n ; i++) {
			cin >> A[i];
			sum += A[i];
		}
		if (sum%n!=0) cout << -1 << endl;
		else {
			j = (sum/n);
			for (i = 0 ; i < n ; i++) {
				if (A[i]<j) ans+=j-A[i];
			}
			cout << ans << endl;
		}
	}
}