#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j,t;	
map<ll,ll> mep;
ll arr[500005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	for (i = 0 ;i < t; i++) cin >> arr[i];
	sort(arr,arr+t);
	i = 0;
	while (i < t) {
		ll frek = 1;
		j = i+1;
		while (arr[j]==arr[i] && j < t){
			j++;
			frek++;
		}
		if (frek==1) {
			cout << arr[i] << '\n';
			return 0;
		}
		i = j;
	}
	return 0;
}