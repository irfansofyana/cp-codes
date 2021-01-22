#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0); cout.tie(0);
using namespace std;

struct paket{
	string depan,belakang;
};

int n,i,j;
paket A[105];

bool comp(paket a,paket b){
	if (a.belakang==b.belakang) return a.depan<b.depan;
	return a.belakang<b.belakang;
}
int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		string a,b;
		cin >> a >> b;
		A[i].depan = a; A[i].belakang = b;
	}
	sort(A,A+n,comp);
	for (i = 0 ; i < n ; i++) {
		cout << A[i].depan << " " << A[i].belakang << '\n';
	}
	return 0;
}