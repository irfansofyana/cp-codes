#include <bits/stdc++.h>
using namespace std;

int n,m,x,i,j,y;
int ans,frek;
pair<int,int> arr[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		stack<int> st;
		priority_queue<int> pq;
		queue<int> qu;
		for (i = 0 ; i < n ; i++) {
			cin >> x >> y;
			arr[i] = make_pair(x,y);
		}
		ans = 0;  frek = 0;
		for (i = 0 ; i < n ; i++) {
			if (arr[i].first==1) {
				st.push(arr[i].second);
			} 
			else {
				if (st.empty()) break;
				else {
					if (st.top() == arr[i].second) {
						st.pop();
					}
					else break;
				}
			}
		}
		if (i==n) {frek++; ans = 1;}
		for (i = 0 ; i < n ; i++) {
			if (arr[i].first == 1) {
				pq.push(arr[i].second);
			}
			else {
				if (pq.empty()) break;
				else {
					if (pq.top() == arr[i].second) {
						pq.pop();
					}
					else break;
				}
			}
		}
		if (i==n) {frek++; ans = 2;}
		for (i = 0 ; i < n ; i++) {
			if (arr[i].first == 1) {
				qu.push(arr[i].second);
			}
			else {
				if (qu.empty()) break;
				else {
					if (qu.front() == arr[i].second) {
						qu.pop();
					} 
					else break;
				}
			}
		}
		if (i==n) {frek++; ans = 3;}
		if (frek==0) cout << "impossible\n";
		else if (frek > 1) cout << "not sure\n";
		else if (ans==1) cout << "stack\n";
		else if (ans==2) cout << "priority queue\n";
		else if (ans==3) cout << "queue\n";
	}
	return 0;
}