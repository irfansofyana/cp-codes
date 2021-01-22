#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

const int N = (int)1e6;

int n,i,j;
int t;
bool dp[N + 5];

void pre_compute(){
	dp[0] = 0;
	for (i = 1 ; i <= N ; i++) {
		for (j = 1 ; j * j <= i ; j++) {
			if (dp[i-j*j] == 0) {
				dp[i] = 1;
				break;
			}
		}
		if (j * j > i) dp[i] = 0;
	}	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	pre_compute();
	cin >> t;
	while (t--) {
		cin >> n;
		cout << (dp[n] == 1 ? "Win" : "Lose") << '\n';
	}
	return 0;
}
