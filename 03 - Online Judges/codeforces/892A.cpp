#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll n;
ll arr[100005];

bool comp(int a,int b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	ll sum = 0;
	for (int i = 0 ; i < n ; i++) {
		ll x;
		cin >> x;
		sum += x;
	}
	for (int i = 0 ; i < n ; i++) cin >> arr[i];
	sort(arr, arr+n, comp);
	cout << (arr[0] + arr[1] >= sum ? "YES" : "NO") << '\n';	
	return 0;
}