#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll m,n,i,j;
ll ambil[55];
ll A[55];

void kombinasi(int pos,int bef){
	if (pos==m) {
		for (ll z = 0 ; z < m ; z++) {
			cout << ambil[z]+1 ;
			cout << (z==m-1 ? '\n': ' ');
		}
	}
	else {
		for (ll z = bef + 1 ; z < n-m+pos+1; z++){
			ambil[pos] = z;
			kombinasi(pos+1,z);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) A[i] = i;
	kombinasi(0,-1);
	return 0;
}