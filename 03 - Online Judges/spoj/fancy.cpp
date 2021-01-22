#include <bits/stdc++.h>
#define fi first
#define se second
#define OPTIMASI
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

const int MAXN = 100000;

int t,i,j;
string s;
ll ans,F[35];

void init(){
	ll sum = 3;
	F[1] = 1; F[2] = 2; 
	for (i = 3 ; i <= 30 ; i++) {
		F[i] = sum + 1;
		sum += F[i];
	}
}

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	init();
	cin >> t;
	while (t--) {
		cin >> s;
		i = 0;
		ans = 1;
		while (i < s.size()) {
			int freq = 1;
			j = i+1;
			while (j < s.size() && s[j] == s[i]) {
				freq++;
				j++;
			}
			ans *= F[freq];
			i = j;
		}
		cout << ans << '\n';
	}
	return 0;
}
