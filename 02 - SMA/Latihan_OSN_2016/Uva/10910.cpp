#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll N,T,P;
ll k,i,j;
ll C[75][75];

void isi() {
	C[0][0] = 1;
	C[1][0] = C[1][1] = 1;
	for (i = 2 ; i <= 74; i++) {
		for (j = 0 ; j <= i ; j++) {
			if (j==0 || j==i) C[i][j] = 1;
			else C[i][j] = C[i-1][j-1] + C[i-1][j];
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	isi();
	int a,b;
	//cin >> a >> b ;
	//cout << C[a][b] << '\n';
	cin >> k;
	while (k--) {
		cin >> N >> T >> P;
		//cout << T-N*P+N-1 << " " << T-N*P << '\n';
		if (N*P <= T) cout << C[T-N*P+N-1][T-N*P] << '\n';
		else cout << 0 << '\n';
	}
	return 0;
}