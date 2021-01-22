#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll n, k;
ll power[505], maks, idx_maks;
deque<ll> deq;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (int i = 0; i < n ; i++) {
		cin >> power[i];
		deq.push_back(power[i]);
		if (i == 0) {
			maks = power[i];
			idx_maks = i;
		}
		else if (power[i] > maks) {
			maks = power[i];
			idx_maks = i;
		}
	}
	int satu = deq.front(); deq.pop_front();
	int dua = deq.front(); deq.pop_front();
	int now;
	//cout << satu << " " << dua << '\n';
	if (satu > dua) now = satu;
	else now = dua;
	int t = 1;
	while (t != k && now != maks) {
		int depan = deq.front(); deq.pop_front();
		if (now > depan){
			deq.push_back(depan);
			t++;
		}
		else {
			t = 1;
			deq.push_back(now);
			now = depan;
		}
	}
	cout << now << '\n';
	return 0;
}	