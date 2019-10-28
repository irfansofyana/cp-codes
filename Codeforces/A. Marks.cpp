#include <bits/stdc++.h>

using namespace std;
struct paket{
	int nilai;
	int pos;
};
paket A[1000];
int idx[1000];
int n,m,sm,jawab;
bool cek;
string s[1000];
bool comp(paket a,paket b){
	if (a.nilai > b.nilai) return true;
	else return false;
}
int main(){
	cin>>n>>m; 
	for (int i=1;i<=n;i++) idx[i]=1;
	for (int i=1;i<=n;i++){
		cin>>s[i];
	}
	for (int i=0;i<m;i++){
		cek=true;
		for (int j=0;j<n;j++){
			A[j].nilai=int(s[j+1][i])-48;
			A[j].pos=j+1;
		}
		sort(A,A+n,comp);
		sm=0;
		while (cek){
			if (A[sm].nilai==A[sm+1].nilai){
				idx[A[sm].pos]=0;
				idx[A[sm+1].pos]=0;
				sm++;
			}
			else{
				idx[A[sm].pos]=0;
				cek=false;
			}
		}
	}
	jawab=0;
	for (int i=1;i<=n;i++){
		if (idx[i]==0) jawab++; 
	}
	cout<<jawab<<endl;
	return 0;
}
