#include <bits/stdc++.h>
using namespace std;

struct paket{
	string nama;
	int nilai;
};
long long A[10];
paket ans[6];

bool comp(paket a,paket b){
	if (a.nilai<b.nilai) return true;
	else if (a.nilai==b.nilai && a.nama<b.nama) return true;
	else return false; 
}
int main(){
	while (scanf("%d %d %d %d %d %d %d %d %d",&A[1],&A[2],&A[3],&A[4],&A[5],&A[6],&A[7],&A[8],&A[9])!=EOF){
		ans[0].nama="BGC";
		ans[0].nilai=A[4]+A[7]+A[2]+A[8]+A[3]+A[6];
		ans[1].nama="BCG";
		ans[1].nilai=A[4]+A[7]+A[3]+A[9]+A[2]+A[5];
		ans[2].nama="CBG";
		ans[2].nilai=A[6]+A[9]+A[1]+A[7]+A[2]+A[5];
		ans[3].nama="CGB";
		ans[3].nilai=A[6]+A[9]+A[2]+A[8]+A[1]+A[4];
		ans[4].nama="GCB";
		ans[4].nilai=A[5]+A[8]+A[3]+A[9]+A[1]+A[4];
		ans[5].nama="GBC";
		ans[5].nilai=A[5]+A[8]+A[1]+A[7]+A[3]+A[6];
		sort(ans,ans+6,comp);
		cout<<ans[0].nama<<" "<<ans[0].nilai<<endl;
	}
	return 0;
}
