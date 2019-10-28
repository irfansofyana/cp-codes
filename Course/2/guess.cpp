#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int com,numb;
bool s,q,p;
string ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		
	stack<int> st;
	queue<int> que;
	priority_queue<int> pq;

		s = true; q = true; p = true;
		while (n--) {
			cin >> com >> numb;
			if (com == 1) {
				st.push(numb);
				que.push(numb);
				pq.push(numb);
			}
			else {
				if (st.empty()) s = false;
				else {
					if (st.top() != numb) s = false;
					else st.pop();
				}
				if (que.empty()) q = false;
				else {
					if (que.front() != numb) q = false;
					else que.pop();
				}
				if (pq.empty()) p = false;
				else {
					if (pq.top() != numb) p = false;
					else pq.pop();
				}
			}
		}
		j = 0;
		if (s){
			j++;
			ans = "stack";
		} 
		if (q) {
			j++;
			ans = "queue";
		}
		if (p) {
			j++;
			ans = "priority queue";
		}
		if (j == 0) cout << "impossible\n";
		else if (j >= 2) cout << "not sure\n";
		else cout << ans << '\n';
	}
	return 0;
}