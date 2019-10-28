#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

struct paket{
	string nama;
	int t,b,th;
}; 

paket A[105];
int n,i,j,a,bb,c;
string s;

bool comp(paket a,paket bc){
	if (a.th==bc.th){
		if (a.b==bc.b) return a.t < bc.t;
		return a.b < bc.b;
	}
	return a.th < bc.th;
}
int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> s >> a >> bb >> c;
		A[i].nama = s; A[i].t = a; A[i].b = bb; A[i].th = c;
	}
	sort(A,A+n,comp);
	cout << A[n-1].nama << '\n';
	cout << A[0].nama << '\n';
	return 0;
}