#include <bits/stdc++.h>
using namespace std;

int n,m,k,i,j;
int A[55],sum;

bool comp(int a,int b){
	return a>b;
}

int main(){
	scanf("%d %d %d", &n, &m ,&k);
	for (i=0;i<n;i++){
		scanf("%d", &A[i]);
	}
	sum = k;
	sort(A,A+n,comp);
	if (k>=m) {
		cout << 0 << endl;
		return 0;
	}
	for (i=0;i<n;i++) {
		sum += A[i]-1;
		if (sum>=m) {
			cout << i+1 << endl;
			break;
		}
	}
	if (m>sum) cout << -1 << endl;
	return 0;
}
