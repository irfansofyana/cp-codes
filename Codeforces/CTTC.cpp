#include <bits/stdc++.h>
using namespace std;

int T, N, child[105], tc;
bool udah[105];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> T;
	while (T--) {
		cin >> N;
		stack<int> st;
		memset(udah, false, sizeof udah);
		memset(child, 0, sizeof child);
		for (int i = 0; i < 2*N; i++) {
			int x;
			cin >> x;
			if (i == 0) {
				st.push(x);
				udah[x] = true;
			}
			else {
				if (udah[x]) st.pop();
				else {
					child[st.top()]++;
					udah[x] = true;
					st.push(x);
				}
			}
		}
		cout << "Case " << ++tc << ":\n";
		for (int i = 1; i <= N ; i++) {
			cout << i << " -> " << child[i] << '\n';
		}
		cout << '\n';
	}
	return 0;
}
	