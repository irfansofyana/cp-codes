#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef long long ll;

ll n,i,j,pos;
vector<int> arr;
ll ask[100005],tmp[100005];
ll x;
int idx;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> pos >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> j;
		arr.pb(j);
	}
	for (i = 0 ; i < n ; i++) {
		cin >> ask[i];
	}
	sort(arr.begin(),arr.end());
	//cout << '\n';
	do{
		idx++;
		x = pos;
		for (i = 0 ; i < arr.size(); i++) {
			tmp[i] = arr[i];
		}
		for (i = 0 ; i < (1 << n); i++) {
			x = pos;
			for (j = 0 ; j < n ; j++) {
				if (i&(1<<j)) {
					x += tmp[j];
				}
				else x -= tmp[j];
				if (x > pos && ask[j] < pos) break;
				if (x < pos && ask[j] > pos) break; 
			}
			if (j == n) {
				for (j = 0 ; j < n ; j++) {
					if (i&(1<<j)) {
						cout << tmp[j] << " depan\n";
					}
					else cout << tmp[j] << " belakang\n";
				}
				return 0;
			}
		}
	}while (next_permutation(arr.begin(),arr.end()));
	return 0;
}
