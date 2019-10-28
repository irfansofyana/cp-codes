#include <bits/stdc++.h>
using namespace std;

int s[102], q[102];
int n, m;

int main(){
	scanf("%d", &n);
	for (int i = 0 ; i < n ; i++) 
		scanf("%d", s + i);
	scanf("%d", &m);
	for (int i = 0 ; i < m; i++)
		scanf("%d", q + i);
	vector<int> ans;
	for (int i = 0 ; i < min(n,m); i++) {
		if (s[i] == q[i]) 
			ans.push_back(i + 1);
	}
	bool pertama = 1;
	for (auto a : ans) {
		//cout << a;
		if (pertama) {
			cout << a;
			pertama = false;
		}
		else cout << " " << a;
	}cout << '\n';
}