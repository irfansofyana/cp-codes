#include <bits/stdc++.h>
using namespace std;

int n,k,i,j,bil;
int A[1000];
int maks,mini;

int main(){
	cin.tie(0);
	cin>>n>>k;
	for (i=0;i<n;i++){
		cin>>A[i];
		if (i==0){
			maks=A[i];
			mini=A[i];
		}
		else {
			if (A[i]>maks) maks=A[i];
			else if (A[i]<mini) mini=A[i];		
		}
	}
	if (maks-mini>k) cout<<"NO"<<endl;
	else{
		cout<<"YES"<<endl;
		for (i=0;i<n;i++){
			bil=1;
			for (j=1;j<=A[i];j++){
				if (bil>k) bil=1;
				if (j==A[i]) cout<<bil<<endl;
				else cout<<bil<<" ";
				bil++;
			}
		}
	}
	return 0;
}
