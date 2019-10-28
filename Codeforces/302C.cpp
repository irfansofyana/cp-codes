#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, arr[105];
vector<int> pos, neg;
priority_queue<int,vector<int>, greater<int> > pq;

int solve(){
	int ans = -1;
	for (int i = 0 ; i < 1000; i++) {
		int sum = 0; 
		int tot = 0;
		vector<int> arr;
		while (!pq.empty()) {
			int x = pq.top();
			pq.pop();
			tot++;
			if (tot <= n) arr.pb(-1*x);
			else arr.pb(x);
			sum += x;
		}
	//	cout << i << " " << sum << '\n';
		if (ans == -1) ans = sum;
		else ans = max(ans, sum);
		for (int j = 0 ; j < arr.size(); j++) 
			pq.push(arr[j]);
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < 2*n-1; i++) {
		int x;
		cin >> x;
		pq.push(x);
	}
	cout << solve() << '\n';
	return 0;
}