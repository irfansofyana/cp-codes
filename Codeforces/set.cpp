#include <bits/stdc++.h>

using namespace std;

set<int> st;

int main(){
	for (int i = 0 ; i < 10; i++) {
		int x;
		cin >> x;
		st.insert(x);
	}
	for (auto i : st) {
		cout << i << '\n';
	}
}