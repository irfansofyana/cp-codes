#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, lastvisit[200005];
bool ada[200005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		int x;
		cin >> x;
		lastvisit[x] = i;
		ada[x] = true;
	}
	int idx, mini = 200005;
	for (int i = 0; i <= 200000; i++) {
		if (ada[i]) {
			if (lastvisit[i] < mini) {
				mini = lastvisit[i];
				idx = i;
			}
		}
	}
	cout << idx << '\n';
	return 0;	
}