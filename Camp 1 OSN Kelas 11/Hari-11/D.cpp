#include <bits/stdc++.h>
using namespace std;

int t,n,m,i,j,d;
int A[1000];
bool ans;

bool comp(int a,int b){
	return a>b;
}

int main(){
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m >> d;
		ans = true;
		for (i = 0 ; i < n ; i++)
			cin >> A[i];
		sort(A,A+n,comp);
		i = 0; j = 0;
		while (i<m && j<n) {
			if (A[j]>d) {
				A[j]-=d;
				i++;
			}
			if (A[j]<=d) j++;
		}
		if (j==n && i!=m) puts("NO");
		else puts("YES");
	}
	return 0;
}