#include <bits/stdc++.h>
using namespace std;
int n,i,j,ngasih,m;
string s;
string nama[3000];
struct paket{
	string nama;
	int uang;
};
paket A[3000];
bool comp(paket a,paket b){
	if (a.nama<b.nama) return true;
	else return false;
}
int binary_search(int x,int y,string cari){
	int tengah=(x+y)/2;
	if (x>y) return -1;
	else if (A[tengah].nama==cari) return tengah;
	else {
		if (cari>A[tengah].nama) {
			return binary_search(tengah+1,y,cari);
		}
		else if (cari<A[tengah].nama) {
			return binary_search(x,tengah-1,cari);
		}
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	while (cin>>n){
		for (i=0;i<3000;i++){
			A[i].nama="";
			A[i].uang=0;
		}
		for (i=0;i<n;i++){
			cin>>nama[i];
			A[i].nama=nama[i];
		}
		sort(A,A+n,comp);
		for (i=1;i<=n;i++){
			cin>>s>>ngasih>>m;
			A[binary_search(0,n,s)].uang-=ngasih;
			for (j=1;j<=m;j++){
				cin>>s;
				A[binary_search(0,n,s)].uang+=ngasih;
			}
		}
		for (i=0;i<n;i++){
			cout<<nama[i]<<" "<<A[binary_search(0,n,nama[i])].uang<<endl;
		}
	}
}
