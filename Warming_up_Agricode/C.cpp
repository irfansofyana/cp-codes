#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int a,b;
string s;
stack<int> st;

int main(){
	cin.tie(0);
	cin >> s;
	for (i = 0 ; i < s.size() ; i++) {
		if (s[i]>='0' && s[i]<='9') {
			st.push(s[i]-'0');
		}
		else {
			a = st.top(); st.pop(); b = st.top(); st.pop();
			if (s[i]=='/' && a==0) {
				cout << "Error: Divide By 0!" << endl;
				return 0;
			} 
			else if (s[i]=='/') {
				st.push(b/a);
			}
			else if (s[i]=='*') {
				st.push(b*a);
			}
			else if (s[i]=='+') {
				st.push(b+a);
			}
			else if (s[i]=='-') {
				st.push(b-a);
			}
		}
	}
	cout << st.top() << endl;
	return 0;
}