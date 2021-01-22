#include <bits/stdc++.h>
using namespace std;

string s,temp;
int n,i,j;
int ans,smt;

int main(){
	ios_base::sync_with_stdio(0);
	cin >> s;
	while (s!="1") {
		ans++;
		if (s[s.size()-1]=='0') {
			temp = "";
			for (i = 0 ; i < s.size()-1 ; i++)
				temp = temp+s[i];
			s = temp;
		}
		else if (s[s.size()-1]=='1') {
			smt = 1; temp = "";
			for (i = s.size()-1; i>=0 ; i--) {
				if (s[i]=='1' && smt==1) {
					temp = '0'+temp;
				}
				else if (s[i]=='0' && smt==1) {
					temp = '1'+temp;
					smt = 0;
				}
				else temp = s[i]+temp;
			}
			if (temp[0]=='0') temp = '1'+temp;
			s = temp;
		}
		//cout << temp << " " << s << endl;
	}
	cout << ans << endl;
	return 0;
}