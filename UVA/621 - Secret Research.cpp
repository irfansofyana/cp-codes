#include <bits/stdc++.h>
using namespace std;
string s;
int n,i;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>s;
		if (s=="1" || s=="4" || s=="78") cout << '+';
		else if (s.substr((int)s.size()-2,2)=="35") cout << '-';
		else if (s[0]=='9' && s[(int)s.size()-1]=='4') cout << '*';
		else cout << '?';
		cout << '\n';
	}
	return 0;
}
