#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const ll MAXN = (ll)3e5;
const ll MOD = (ll)1e9 + 7;
 
ll N, arr[MAXN+5];
ll depan, ans, pkt, belakang;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N; 
	for (int i = 0 ; i < N; i++) 
		cin >> arr[i];
	sort(arr, arr+N);
	pkt = 1; 
	for (int i = 0 ; i <= N-2; i++) {
		depan += arr[N-1-i];
		belakang += arr[i];
		ans += pkt*((depan - belakang)%MOD);
		pkt <<= 1; pkt %= MOD;
		ans %= MOD;
	}
	cout << ans << '\n';
	return 0;
}