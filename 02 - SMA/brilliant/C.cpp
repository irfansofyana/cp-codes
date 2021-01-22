#include <bits/stdc++.h>
using namespace std;

int n,i,j,jumlah,maks,mini;
int A[200010];
long long sum;

int main(){
	cin >> n >> jumlah;
	for (i=0;i<n;i++) {
		cin >> A[i];
		sum+=A[i];
	}
	for (i=0;i<n;i++){
		mini=n-1;
		maks=sum-A[i];
		if (maks>=A[i]) {
			if (i!=n-1) cout<<0<<" ";
			else cout<<0<<endl;
		}
		else {
			if (i!=n-1) cout<<A[i]<<" ";
			else cout<<A[i]<<endl;
		}
	}
	return 0;
}
