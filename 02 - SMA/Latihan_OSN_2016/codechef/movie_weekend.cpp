#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;

struct paket{
	int idx,nilai,rating;
};

paket A[105];

bool comp(paket a,paket b){
	if (a.nilai == b.nilai) {
		if (a.rating == b.rating) return a.idx < b.idx;
		return a.rating > b.rating;
	}
	return a.nilai > b.nilai;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		int l[105];
		for (i = 0 ; i < n ; i++) cin >> l[i];
		int r[105];
		for (i = 0 ; i < n ; i++) cin >> r[i];
		for (i = 0 ; i < n ; i++){
			A[i].idx = i;
			A[i].rating = r[i];
			A[i].nilai = l[i]*r[i];
		}
		sort(A,A+n,comp);
		cout << A[0].idx + 1 << '\n';
	}
	return 0;
}