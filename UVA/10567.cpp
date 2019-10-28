#include <bits/stdc++.h>
using namespace std;

string s,temp;
int n,m,i,j;
int q;
int ans1,ans2;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	cin >> q;
	while (q--) {
		cin >> temp;
		i = 0; j = 0;
		ans1=0,ans2=0;
		while (i < s.size() && j < temp.size()) {
			if (s[i]==temp[j]) {
				if (j==0) ans1 = i;
				else if (j==(temp.size()-1)) ans2 = i;
				i++; j++;
			}
			else i++;
		}
		(j<(temp.size())) ? cout << "Not matched" << '\n' : cout << "Matched " << ans1 << " " << ans2 << '\n';
	}
	return 0;
}