#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

string s,ans;
int n,i,j;

int main(){
	OPTIMASI
	cin >> s;
	reverse(s.begin(),s.end());
	ans = "";i = 0;
	while (i<s.size()){
		ans = ans+s[i];
		if (s[i]=='a' || s[i]=='i' || s[i]=='u' || s[i]=='e' || s[i]=='o') i += 3;
		else i++;
	}
	cout << ans << '\n';
	return 0;
}