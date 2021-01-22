#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
const int N = 100000;

int t,i,n,j;
ll A[N + 5], B[N + 5];

struct paket{
	ll a,b,dif;
};

paket arr[N + 5];

bool comp(paket a,paket b){
	return a.dif > b.dif;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) cin >> A[i];
		for (i = 0 ; i < n ; i++) cin >> B[i];
		for (i = 0 ; i < n ; i++) {
			arr[i].a = A[i]; arr[i].b = B[i]; arr[i].dif = A[i]-B[i];
		}
		sort(arr,arr+n,comp);
		int ans = 0;
		ll sum = 0;
		for (i = 0 ; i < n ; i++) {
			sum += arr[i].dif;
			if (sum < 0) break;
			else ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}
