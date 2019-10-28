#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j,tmp,ans;
ll tinggi[100005],arr[100005];
map<ll,ll> mep;
string dummy;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++){
		cin >> tinggi[i];
		arr[i] = tinggi[i];
	}
	sort(arr,arr+n);
	i = 0; j = 0;
	while (i < n) {
		mep[tinggi[i]]++;
		tmp++;
		if (mep[arr[j]] > 0) {
			mep[arr[j]]--;
			tmp--;
			j++;
			while (j < n && mep[arr[j]] > 0){
				tmp--;
				mep[arr[j]]--;
				j++;
			}
			if (tmp==0) ans++;
		}
		i++;
	}
	cout << ans << '\n';
	return 0;
}