#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const LL mod = 1e9 + 7;
const int MAXN = 1e5;

int parent[MAXN+5];
int cnt[MAXN+5];
bool udah[MAXN+5];
int n, k;

int findParent(int x){
	return (parent[x] == x ? x : parent[x] = findParent(parent[x]));
}

void unionSet(int a, int b){
	int x = findParent(a);
	int y = findParent(b);
	if (x != y){
		parent[x] = y;
		cnt[y] += cnt[x];
	}
}

void initialize(){
	for (int i = 1; i <= n; i++){
		parent[i] = i;
		cnt[i] = 1;
	}
}

LL power(int a, int b){
	if (b == 0) return 1;
	else if (b == 1) return a;
	LL tmp = power(a, b>>1);
	tmp = (tmp * tmp) % mod;
	if (b%2 == 0) return tmp;
	else return ((a%mod)*tmp)%mod;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	initialize();
	for (int i = 0; i < n-1; i++){
		int a, b, c;
		cin >> a >> b >> c;
		if (c == 0){
			unionSet(a, b);
		}
	}
	LL ans = power(n, k);
	for (int i = 1; i <= n; i++){
		int par = findParent(i);
		if (!udah[par]){
			udah[par] = true;
			ans = (ans - power(cnt[par], k) + mod)%mod;
		}
	}
	cout << ans << '\n';
	return 0;
}