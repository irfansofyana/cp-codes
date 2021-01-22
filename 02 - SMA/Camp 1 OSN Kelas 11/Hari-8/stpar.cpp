#include <bits/stdc++.h>
using namespace std;

int n,i,j,idx;
int A[10005];
stack<int> st;
bool ans;

int main(){
	cin.tie(0);
	while (cin >> n && n!=0) {
		for (i = 0 ; i < n ; i++) cin >> A[i];
		idx = 1; i = 0; ans = true;
		while (idx!=n) {
			if (!st.empty()) {
				if (st.top()==idx) {
					st.pop();
					idx++;
				}
				else {
					while (A[i]!=idx && i<n) {
						st.push(A[i]);
						i++;
					}
					if (A[i]==idx) {i++; idx++;}
					else {
						while (!st.empty()) {
							if (st.top()!=idx) {
								ans = false;
							}
							else idx++;
							st.pop();
						} 
						break;
					}
				}
			}
			else {
				while (A[i]!=idx && i<n) {
					st.push(A[i]);
					i++;
				}
				if (A[i]==idx) {i++; idx++;}
				else {
					while (!st.empty()) {
						if (st.top()!=idx) {
							ans = false;
						}
						else idx++;
						st.pop();
					} 
					break;
				}
			}
		}
		if (ans) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}