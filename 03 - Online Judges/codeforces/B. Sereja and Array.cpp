#include <bits/stdc++.h>
using namespace std;
long long n,m,i,j,jumlah;
long long A[100010];
long long tanya[100010];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>m;
	for (i=1;i<=n;i++) cin>>A[i];
	for (i=1;i<=m;i++){
		int idx;
		cin>>idx;
		if (idx==1) {
			long long temp1,temp2;
			cin>>temp1>>temp2;
			A[temp1]=temp2;
		}
		else if (idx==2){
			long long temp;
			cin>>temp;
			jumlah+=temp;
		}
		else if (idx==3){
			long long idx1;
			cin>>idx1;
			cout<<A[idx1]<<endl;
		}
	}
	return 0;
}
