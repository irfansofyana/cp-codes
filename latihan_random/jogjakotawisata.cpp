#include <bits/stdc++.h>
using namespace std;
int n,m,i,j,jumlah,maks;
int A[25][25];
bool kunjung[25];
void dfs(int x,int y){
	if (!kunjung[y]) {
		jumlah+=A[x][y]; kunjung[x]=true;
		for (int z=0;z<n;z++){
			dfs(y,z);
		}
	}
}
int main(){
	cin.tie(0);
	cin>>n>>m;
	memset(kunjung,false,sizeof(kunjung));
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cin>>A[i][j];
		}
	} int idx1,idx2;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
				jumlah=0;
				memset(kunjung,false,sizeof(kunjung));
				dfs(i,j);
				if (jumlah>maks && jumlah<m){
					maks=jumlah;
				}
		}
	}
	cout<<maks<<endl;
	cout<<idx1<<" "<<idx2<<endl;
}
