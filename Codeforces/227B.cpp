#include <bits/stdc++.h>
using namespace std;

struct paket{
	int nilai,urutan;
};

const int MAXN = 100000;

int n,m,i,j,x;
long long petya,vasya;
paket A[MAXN+5];

bool comp(paket a,paket b){
	return a.nilai<b.nilai;
}

int binary_search(int awal,int ujung,int bil) {
	int tengah = (awal+ujung)/2;
	if (A[tengah].nilai==bil) return A[tengah].urutan;
	else if (A[tengah].nilai>bil) return binary_search(awal,tengah-1,bil);
	else if (A[tengah].nilai<bil) return binary_search(tengah+1,ujung,bil);
}
int main(){
	scanf("%d", &n);
	for (i = 0 ; i < n ; i ++ ){
		scanf("%d", &x);
		A[i].nilai = x; A[i].urutan = i+1;
	}
	sort(A,A+n,comp);
	scanf("%d", &m);
	while (m--) {
		scanf("%d", &x);
		//cout << binary_search(0,n-1,x) << endl;
		vasya += binary_search(0,n-1,x);
		petya += n-binary_search(0,n-1,x)+1;
	}
	printf("%I64d %I64d\n", vasya, petya);
 	return 0;
}