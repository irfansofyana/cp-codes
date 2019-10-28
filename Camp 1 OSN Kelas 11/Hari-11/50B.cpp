#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

string s;
long long n,i,j;
long long ans,smt;

int main(){
	_
	cin >> s;
	sort(s.begin(),s.end());
	i = 0;
	while (i<s.size()) {
		j = i+1; smt = 1;
		while (s[j]==s[i] && j<s.size()) {
			smt++;
			j++;
		}
		ans += smt*(smt-1);
		i = j;
	}
	cout << ans+s.size() << endl;
	return 0;
}