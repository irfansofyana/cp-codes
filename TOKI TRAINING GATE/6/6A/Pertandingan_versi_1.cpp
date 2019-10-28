#include <bits/stdc++.h>
#define INF 2000000000
using namespace std;

int t,n,i,j,aku,dia;
int lawan[100005];
int A[100005];
bool sudah[100005];

bool bs(int depan,int belakang,int bil,int smt,int idx){
	int tengah = (depan+belakang)/2;
	if (depan>belakang) {
		sudah[idx] = true;
		if (smt!=INF) return true;
		return false;
	}
	else if (A[tengah]<=bil) return bs(tengah+1,belakang,bil,smt,idx);
	else if (A[tengah]>bil) {
		if (sudah[tengah]) {
			return bs(tengah+1,belakang,bil,smt,idx); 
		}
		else {
			if (A[tengah]<smt) return bs(depan,tengah-1,bil,A[tengah],tengah);
			else if (A[tengah]==smt) {
				if (tengah<idx) return bs(depan,tengah-1,bil,A[tengah],tengah);
			}
			else return bs(depan,tengah-1,bil,smt,idx);
		}
	}
}

int main(){
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i=0;i<n;i++) scanf("%d", &lawan[i]);
		for (i=0;i<n;i++) scanf("%d", &A[i]);
		sort(lawan,lawan+n);
		sort(A,A+n);
		memset(sudah,false,sizeof sudah);
		aku = dia = 0;
		for (i=0;i<n;i++) {
			j = lawan[i];
			if (bs(0,n-1,j,INF,n)) aku+=3;
			else dia+=3;
		}
		puts(aku>dia?"YA":"TIDAK");
	}
	return 0;
}
