#include <bits/stdc++.h>
using namespace std;
int n,i,j;
struct paket{
	int satu,dua;
};
paket A[50000];
bool comp(paket a,paket b){
	if (a.satu<b.satu) return true;
	else if (a.satu==b.satu){
		if (a.dua<=b.dua) return true;
		else return false;
	}
	else return false;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	int t;
	cin>>t;
	for (int z=1;z<=t;z++){
		cin>>n;
		for (i=0;i<n;i++){
			int x,y;
			cin>>x>>y;
			A[i].satu=x; A[i].dua=y;
		}
		sort(A,A+n,comp);
//		for (i=0;i<n;i++) cout<<A[i].satu<<" "<<A[i].dua<<endl;
		cout<<"Kasus #"<<z<<": "<<abs(A[n-1].satu-A[0].satu)+abs(A[n-1].dua-A[0].dua)<<endl;
	}
	return 0;
}
