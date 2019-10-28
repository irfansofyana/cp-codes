#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
const int N = 300000;

ll n,i,j,bil;
ll arr[N + 5];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> arr[i];
	sort(arr,arr+n);
	bil = arr[(n-1)/2];
	cout << bil << '\n';
	return 0;
}
