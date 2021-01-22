#include <bits/stdc++.h>
using namespace std;

int n,i,j,t,m;
int A[20010],D[20010];
int komp; 
bool selesai=true;
bool comp(int p,int q){
	if (p>q) return true;
	else return false;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>t;
	for (i=1;i<=t;i++){
		cin>>n>>m;
		selesai=true;
		for (j=0;j<n;j++) cin>>A[j];
		for (j=0;j<m;j++) cin>>D[j];
		sort(A,A+n);
		sort(D,D+m,comp);
		komp=0;
		/*for (j=0;j<n;j++) cout<<A[j]<<" ";
		cout<<endl;
		for (j=0;j<m;j++) cout<<D[j]<<" ";
		cout<<endl;*/
		for (j=0;j<n;j++){
			for (int k=0;k<m;k++){
				if (A[j]<=A[k]){
					if (j==0) selesai=false;
					komp++;
				} 
			}
			if (selesai) break;
		}
		cout<<n*m-komp<<endl;
	}
	return 0;
}