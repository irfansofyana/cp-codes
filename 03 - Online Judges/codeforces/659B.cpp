#include <bits/stdc++.h>
using namespace std;

struct paket{
	string nama;
	int grup,nilai;
};

int n,m,i,j;
paket A[100005];

bool comp(paket a,paket b){
	if (a.grup==b.grup) return a.nilai>b.nilai;
	return a.grup < b.grup;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) {
		string s;
		int nn,kl;
		cin >> s >> kl >> nn;
		A[i].nama = s; A[i].grup = kl; A[i].nilai = nn;
	}
	sort(A,A+n,comp);
	/*for (i = 0 ; i < n ; i++) {
		cout << A[i].nama << " " << A[i].grup << " " << A[i].nilai << '\n';
	} */
	i = 0;
	while (i < n) {
		if (A[i].nilai==A[i+1].nilai && A[i+1].nilai==A[i+2].nilai) cout << '?' << '\n';
		else cout << A[i].nama << " " << A[i+1].nama << '\n';
		j = i+1;
		while (A[j].grup==A[i].grup && j < n) j++;
		i = j;
	}
	return 0;
}