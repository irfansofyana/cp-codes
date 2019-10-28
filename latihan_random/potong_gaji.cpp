#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,i,p,jawaban;
	int n,m,j,banyak,jumlah=0;
	int A[100000];
	double rata;
	bool cek;
	
	cin>>t;
	for (i=1;i<=t;i++){
		cin>>n>>m;
		jumlah=0;
		for (j=0;j<n;j++){
			cin>>A[j];
			jumlah+=A[j];
		}
		if (jumlah<=m) cout<<-1<<endl;
		else{
			cek=true;
			rata=m/n;
			p=(rata);
			while (cek){
				jumlah=0;
				for (j=0;j<n;j++){
					if (A[j]>p) jumlah+=p;
					else jumlah+=A[j];
				}
				if (jumlah<=m){
					p++;
					cek=true;
				}
				else if (jumlah>m){
					cek=false;
					jawaban=p-1;
				}
			}
			cout<<jawaban<<endl;
		}
	}
	return 0;
}
