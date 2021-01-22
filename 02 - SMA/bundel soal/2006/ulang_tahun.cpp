#include <bits/stdc++.h>
using namespace std;
int n,q,i,j;
string ngaran,t,tanya;
struct paket{
	string telfon,nama;
};
bool comp(paket a,paket b){
	if (a.nama<b.nama) return true;
	else return false;
}
paket A[10010];
int binarysearch(int x,int y,string st){
	int tengah;
	tengah=(x+y)/2;
	if (x>y) return -1;
	else if (A[tengah].nama==st) return tengah;
	else if (st<A[tengah].nama) return binarysearch(x,tengah-1,st);
	else if (st>A[tengah].nama) return binarysearch(tengah+1,y,st);
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>q;
	for (i=0;i<n;i++){
		cin>>ngaran>>t;
		A[i].nama=ngaran; A[i].telfon=t;
	}
	sort(A,A+n,comp);
	for (i=0;i<q;i++){
		cin>>tanya;
		if (binarysearch(0,n,tanya)!=-1) cout<<A[binarysearch(0,n,tanya)].telfon<<endl;
	}
	return 0;
}
