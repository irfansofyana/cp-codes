#include <bits/stdc++.h>
using namespace std;

string s;
int A[26];
int n,i,j;
vector<char> ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	getline(cin,s);
	while (n--) {
		getline(cin,s);
		memset(A,0,sizeof A);
		for (i = 0 ; i < s.size(); i++){
			if (s[i]>='A' && s[i]<='Z') A[(int)s[i]-'A']++;
			else if (s[i]>='a' && s[i]<='z') A[(int)s[i]-'a']++;
		}
		ans.clear();
		for (i = 0 ; i < 26 ; i++) {
			if (A[i]==0) ans.push_back(char(i+'a'));
		}
		if (ans.size()==0) cout << "pangram\n";
		else{
			cout << "missing ";
			for (i = 0 ; i < ans.size(); i++) cout << ans[i];
			cout << '\n';
		}
	}
	return 0;
}