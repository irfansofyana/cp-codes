#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0); cout.tie(0);
using namespace std;

string s,ans;
int i,j;

int main(){
	OPTIMASI
	getline(cin,s);
	ans = "";
	while (i<s.size()) {
		ans = ans+s[i];
		if (s[i]=='e' || s[i]=='a' || s[i]=='i' || s[i]=='u' || s[i]=='o') {
			i+=3;
		}
		else i++;
	}
	cout << ans << '\n';
	return 0;
}