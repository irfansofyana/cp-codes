#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k,mini,maks;
int A[1005];
int dp[1005];

void isi(){
	for (i=1;i<=1000;i++){
		dp[i]=dp[i-1]+i;
	}
}

bool comp(int a,int b){
	return (a>b);
}
int main() {
	isi();
	cin >> n >> m;
	for (i=0;i<m;i++) cin>>A[i];
	i = 0;
	k = n;
	sort(A,A+m);
	while (k>0) {
		if (A[i]<=k) {
			mini+=dp[A[i]];
			k-=A[i];
			i++;
		}
		else {
			mini+=(dp[A[i]]-dp[A[i]-k]);
			k = 0;
		}
	}
	k = n;
	i = m-1;
	while (k>0) {
		if (A[i]<=k) {
			maks+=dp[A[i]];
			k-=A[i];
			i--;
		}
		else {
			maks+=(dp[A[i]]-dp[A[i]-k]);
			k = 0;
		}
	}
	cout << maks <<" "<< mini << endl;
}
