#include <bits/stdc++.h>
using namespace std;

int N;
set<pair<int,int> > st;
priority_queue<pair<int,int> > pq;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 0 ; i < N; i++) {
		int x;
		cin >> x;
		st.insert({x, i+1});
	}
	for (int i = 0 ; i < 2 * N; i++) {
		char ch;
		cin >> ch;
		pair<int,int> tmp;
		if (ch == '0') {
			auto a = st.begin();
			tmp = *a;
			cout << tmp.second;
			st.erase(st.begin());
			pq.push(tmp);
		}
		else {
			tmp = pq.top();
			pq.pop();
			cout << tmp.second;
		}	
		if (i == (2*N - 1)) cout << '\n';
		else cout << " ";
	}
	return 0;
}