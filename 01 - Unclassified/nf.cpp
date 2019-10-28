#include <bits/stdc++.h>
using namespace std;
int n,A[10000];
int main(){
	cin.tie(0);
	cin>>n;
	for (int i=1;i<=n;i++){
		int x;
		cin>>x;
		A[x]++;
	}
	for (int i=1;i<=5000;i++){
		if (A[i]!=0){
			cout<<i<<" aparece "<<A[i]<<" vez(es)"<<endl;
		}
	}
	return 0;
}
