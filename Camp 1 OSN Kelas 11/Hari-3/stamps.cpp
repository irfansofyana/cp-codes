#include <bits/stdc++.h>
using namespace std;

long long zz,t,n,i,j,x;
long long A[1005];
long long sum;

bool comp(long long a,long long b){
	return a>b;
}

int main(){
	cin.tie(0);
	cin >> t;
	for (zz = 1 ; zz<= t ;zz++) {
		cin >> x >> n;
		for (i = 0 ; i < n ; i++) {
			cin >> A[i];
		}
		sort(A,A+n,comp);
		sum = 0;
		for (i = 0 ; i < n ; i++) {
			sum+=A[i];
			if (sum>=x) break;
		}
		cout << "Scenario #" << zz << ':' << endl;
		if (i==n) cout << "impossible" << endl;
		else cout << i+1 << endl;
	}
	return 0;
}