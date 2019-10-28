#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
vector<ll> arr;
bool bilangan[1000005];

void generate(){
	memset(bilangan,true,sizeof bilangan);
	for (i = 2 ; i * i * i <= 1000000 ; i++) {
		bilangan[i*i*i] = false;
		j = 2;
		while (i * i * i * j <= 1000000) {
			bilangan[i*i*i*j] = false;
			j++;
		}
	}
	for (i = 1 ; i <= 1000000; i++) {
		if (bilangan[i]) arr.push_back(i);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	cin >> m;
	int tc = 0;
	while (m--) {
		cin >> n;
		ll idx = lower_bound(arr.begin(),arr.end(),n)-arr.begin();
		if (arr[idx]==n) {
			cout << "Case " << ++tc << ": " << idx+1 << '\n';
		}
		else cout << "Case " << ++tc << ": Not Cube Free\n"; 
	}
	return 0;
}