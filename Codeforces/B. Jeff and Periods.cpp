#include <bits/stdc++.h>
using namespace std;

struct paket{
	int nilai,pos;
};
struct jaw{
	int many,jawaban;
};
int n,i,idx,j,beda;
paket A[100010];
jaw B[100010];
int temp,bil,ans;
bool comp(paket a,paket b){
	if (a.nilai<b.nilai) return true;
	else if (a.nilai==b.nilai){
		if (a.pos<b.pos) return true;
		else return false;
	}
	else return false;
}
bool smt,pertama;
int main() {
	cin >> n;
	for (i = 0 ; i < n ;i++){
		cin >> temp;
		A[i].pos = i+1;
		A[i].nilai = temp;
	}
	sort(A,A+n,comp);
	/*for (i=0;i<n;i++){
		cout<<A[i].nilai<<" "<<A[i].pos<<endl;
	} */
	i=0;
	while (i<n){
		j = i;
		bil = A[j].nilai;
		pertama=true;
		beda=0;
		smt=true;
		while (A[j].nilai==A[j+1].nilai && smt && j<=n-2){
			if (pertama) {
				beda=A[j+1].pos-A[j].pos;
				pertama=false;
			} 
			else {
				if (A[j+1].pos-A[j].pos!=beda){
					smt=false;
					break;
				}
			}
			j++;
	//		cout<<beda<<endl;
		}
	//	cout<<j<<endl;
		if (smt) {
			ans++;
			B[idx].jawaban=bil;
			B[idx].many=beda;
			idx++;
		}
		else {
			while (A[j].nilai==A[j+1].nilai) j++;
		}
		i=j+1;
	}
	cout << ans << endl;
	for (i=0;i<ans;i++){
		cout<<B[i].jawaban<<" "<<B[i].many<<endl;
	}
	return 0;
}
