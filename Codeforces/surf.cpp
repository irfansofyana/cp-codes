#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

struct paket{
	ll poin,awal,tunggu,selesai;
};

ll n,m,i,j;
paket A[300005];

bool comp(paket a,paket b){
	if (a.selesai==b.selesai) return a.mulai<b.mulai;
	return a.selesai<b.selesai;
}

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n ; i++){
		ll a,b,c;
		cin >> a >> b >> c;
		A[i].awal = a; A[i].poin = b; A[i].tunggu = c; A[i].selesai = a+c;
	}
	sort(A,A+n,comp);
	
	return 0;
}