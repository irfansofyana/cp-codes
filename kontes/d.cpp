	#include <bits/stdc++.h>
	using namespace std;

	int n,m,i,j;
	string s;

	int main(){
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
		cin >> s;
		i = 0;
		string res = "";
		while (i<s.size()){
			res = res+s[i];
			j = i+1;
			while (j<s.size() && s[j]==s[i]){
				j++;
			}
			i = j;
		}
		cout << res << '\n';
		return 0;
	}