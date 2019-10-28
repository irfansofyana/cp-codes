#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

const int N = (int)1e6;

int arr[N + 5],i,j,k,n,m;
int tree[2*N + 10];
int t,tc,ttc,idx,kiri,kanan;
string s;
char ch;

inline void build(int idx,int kiri,int kanan){
	if (kiri == kanan) {
		tree[idx] = arr[kiri];
	}
	else {
		build(2 * idx , kiri, (kiri+kanan)/2);
		build(2 * idx + 1, (kiri + kanan)/2 + 1, kanan);
		tree[idx] = tree[2 * idx] + tree[2 * idx + 1];
	}
}

inline void update(int idx, int a, int b, int kiri, int kanan) {
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		idx = 0;
		while (n--) {
			cin >> m >> s;
			while (m--) {
				for (i = 0 ; i < s.size(); i++) {
					arr[idx] = (int)s[i]-'0';
					idx++;
				}
			}
		}
		n = idx;
		build(1,0,n-1);
		cout << "Case " << ++tc << ":\n";
		int nom = 0;
		cin >> ttc;
		while (ttc--) {
			cout << "Q" << ++nom << ": ";
			cin >> ch >> kiri >> kanan;
			if (ch == 'F') {
				
			}
		}
	}
	return 0;
}
