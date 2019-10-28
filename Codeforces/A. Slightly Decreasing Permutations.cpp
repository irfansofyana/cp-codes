#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,i,j,jumlah;
	int banyak;
	cin>>n>>k;
	if (k==0){
		for (i=1;i<=n;i++){
			if (i<n) cout<<i<<" ";
			else cout<<i<<endl;
		}
	}
	else{
		j=n;
		for (i=1;i<=k;i++){
			cout<<j<<" ";
			j--;
		}
		j=1;
		for (i=k+1;i<=n;i++){
			if (i<n) cout<<j<<" ";
			else cout<<j<<endl;
			j++;
		}
	}
	return 0;
}
