#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

int arr[105];
int n,ma,mb;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	ma = 1; mb = 2;
	int gamain = 3;
	bool ans = true;
	for (int i = 0 ; i < n ; i++) {
		int x;
		int c = gamain;
		cin >> x;
		if (x == gamain) {
			ans = false;
			//return 0;
		}
		else {
			if (x == ma) {
				gamain = mb;
				mb = c;
			}
			else if (x == mb){
				gamain = ma;
				ma = c;
			}
		}
	}
	if (ans) cout << "YES\n";
	else cout << "NO\n";
	return 0;	
}