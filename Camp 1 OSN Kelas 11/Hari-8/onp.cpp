#include <bits/stdc++.h>
using namespace std;

int tc,n,i,j;
string s;
stack<char> st,temp;

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> s;
		for (i  = 0 ; i < s.size() ; i++) {
			if (s[i]=='(') continue;
			else if (s[i]>='a' && s[i]<='z') cout << s[i];
			else if (s[i]==')') {
				cout << st.top();
				st.pop();
			}
			else st.push(s[i]);
		}
		cout << endl;
	}
	return 0;
}