#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
const ll MOD = (ll)1e9 + 7;
const ll N = (ll)1e5;

ll n,m,i,j,sum,ans;
map<ll,int> mep;
int t;
ll arr[3*N + 5],kali,max_kali;
ll simpan[3*N + 5];
char ch;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (i = 0 ; i < n ; i++) {
			cin >> ch;
			arr[i] = ch - 'a' ;
		}
		mep.clear(); ans = 0; sum = 0; max_kali = 1;
		for (i = 0 ; i < m ; i++) {
			simpan[i] = max_kali;
			max_kali *= 26;
		}
		j = m-1;
		for (i = 0 ; i < m ; i++) {
			sum += (simpan[j] * arr[i]);
			//sum %= MOD;
			j--;
		}
		mep[sum]++; ans++;
		for (i = m ; i < n ; i++) {
			sum = sum - (simpan[m-1] * arr[i-m]);
			sum *= 26; //sum %= MOD;
			sum += arr[i]; //sum %= MOD;
			if (mep[sum] == 0) {
				mep[sum]++;
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
