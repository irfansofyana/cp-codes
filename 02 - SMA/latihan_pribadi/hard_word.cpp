#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,tc,n,i,j;
string s;
int temp,res;

bool vokal(char c){
	if (c=='A'||c=='I'||c=='U'||c=='E'||c=='O') return true;
	return false;
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> s; res = 0;
		i = 0;
		while (i<s.size()) {
			if (vokal(s[i])) {
				j = i+1; temp = 1;
				while (vokal(s[j]) && j<s.size()) {
					temp ++ ; j++;
				}
				if (temp>=3) res += temp-3+1;
				i = j;
			}
			else {
				j = i+1; temp = 1;
				while (!vokal(s[j]) && j<s.size()) {
					temp ++ ; j++;
				}
				if (temp>=2) res += temp-2+1;
				i = j;
			}
			//cout << temp << endl;
		}
		cout << "Case #" << ++tc <<": ";
		if (res==0) cout << "EASY" ;
		else cout << res ;
		cout << '\n';
	}
	return 0;
}