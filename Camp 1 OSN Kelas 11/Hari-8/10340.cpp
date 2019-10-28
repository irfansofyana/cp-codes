#include <bits/stdc++.h>
using namespace std;

string s,t;
int n,i,j,idx;

int main(){
	cin.tie(0);
	while (cin >> s >> t){
		idx = 0;
		for (i = 0 ; i < t.size() ; i++) {
			if (t[i]==s[idx]) idx++;
		}
		if (idx==s.size()) puts("Yes");
		else puts("No");
	}
	return 0;
}