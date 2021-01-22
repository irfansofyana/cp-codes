#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MAXN = (ll)2e5;

ll n,k,i,j;
ll arr[MAXN + 5];
ll sum,tot;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	for (i = 0 ; i < k ; i++) {
		sum += arr[i];
	}
	tot += sum;
	for (i = k ; i < n ; i++) {
		sum -= arr[i-k];
		sum += arr[i];
		tot += sum;
	}
	cout << fixed << setprecision(10);
	cout << (double)(tot)/(n-k+1) << '\n';
	return 0;
}