#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int x,ans,a,b;
priority_queue<int> pq;

int main(){
	cin.tie(0);
	while (cin >> n && n!=0) {
		ans = 0;
		for (i = 0 ; i < n ; i++) {
			cin >> x;
			pq.push((-1)*x);
		}
		while (pq.size()!=1) {
			a = pq.top()*(-1); pq.pop(); 
			b = pq.top()*(-1); pq.pop();
			ans += a+b; pq.push(-1*(a+b));
		}
		while (!pq.empty()) {
			pq.pop();
		}
		cout << ans << endl;
	}
	return 0;
}