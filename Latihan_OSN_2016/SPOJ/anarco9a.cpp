#include <bits/stdc++.h>
using namespace std;

string s;
int i,j;
int tc;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> s){
		if (s[0]=='-') return 0;
		int tutup = 0;
		int kurang = 0;
		int ans = 0;
		stack<char> st;
		bool nyala = false;
		for (i = 0 ; i < s.size(); i++) {
			if (s[i]=='{'){
				st.push(s[i]);
			}
			else {
				tutup++;
				if (!st.empty()) {
					tutup--;
					st.pop();
				}
				else {
					tutup--;
					ans++;
					st.push(s[i]);
				}
			}
		}
		int x = 0;
		while (!st.empty()) {
			x++;
			st.pop();
		}
		cout << ++tc << ". " << ans+(x/2) << '\n';
	}
	return 0;
}