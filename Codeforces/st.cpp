#include <bits/stdc++.h>

using namespace std;

set<int> st;

int main(){
	int q;
	cin >> q;
	for (int i = 0 ; i < q; i++) {
		int x;
		cin >> x;
		st.insert(x);
	}
	cin >> q;
	while (q--) {
		int y;
		cin >> y;
		st.erase(y);
		auto awal = st.begin();
		cout << *awal << '\n';
	}
}