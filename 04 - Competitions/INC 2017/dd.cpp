#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;


typedef long long ll;
typedef pair<ll,ll> pll;

const ll MOD = (ll)1e9+7;

struct matrix{
	int mat[3][3];
};

ll n, m, k;
pll arr[100005];
matrix xxx;

matrix matmul(matrix a, matrix b){
	matrix ans;
	int i,j,k;
	for (int i = 0 ; i < 2; i++) {
		for (int j = 0 ; j < 2; j++) {
			for (ans.mat[i][j] = k = 0; k < 2; k++) 
				ans.mat[i][j] += ((a.mat[i][k]%MOD) * (b.mat[k][j]%MOD));
		}
	}
	return ans;
}

matrix matpow(matrix base, ll p){
	matrix ans;
	int i,j;
	for (int i = 0 ; i < 2; i++) for (j = 0; j < 2; j++)
		ans.mat[i][j] = (i==j);
	while (p) {
		if (p&1) ans = matmul(ans, base);
		base = matmul(base, base);
		p >>= 1;
	}
	return ans;
}

void precompute(){
	xxx.mat[0][0] = n-2; 
	xxx.mat[0][1] = 1;
	xxx.mat[1][0] = n-1;
	xxx.mat[1][1] = 0;
}

ll sama(ll x){
	matrix tt = matpow(xxx, x);
	ll hasil = 0;
	hasil = hasil + 
}

ll beda(ll x){

}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	precompute();
	cin >> n >> m >> k;
	for (int i = 0 ; i < k; i++) {
		cin >> arr[i].fi >> arr[i].se;
	}

	return 0;
}