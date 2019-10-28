#include <bits/stdc++.h>
using namespace std;
int t,n,i,j;
struct paket{
	int pos;
	int nilai;
};
bool comp(paket a,paket b){
	if (a.nilai>b.nilai){
		if (a.pos<=b.pos) return true;
		else return false;
	}
	else if (a.nilai==b.nilai) {
		if (a.pos<=b.pos) return true;
		else return false;
	}
	else if (a.nilai>b.nilai) {
		if (a.pos<=b.pos) return true;
		else return false;
	}
}
paket A[100000];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>t;
	while (t--){
		cin>>n;
		for (i=0;i<n;i++){
			int x;
			cin>>x;
			A[i].nilai=x;
			A[i].pos=i+1;
		}
		sort(A,A+n,comp);
		for (i=0;i<n;i++){
			cout<<A[i].nilai<<" "<<A[i].pos<<endl;
		}
	}
}
