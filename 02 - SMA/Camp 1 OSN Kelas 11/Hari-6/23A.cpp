#include <bits/stdc++.h>
using namespace std;

int smt,ans,prev;
string s,temp;
int i,j;

int main(){
	cin.tie(0);
	cin >> s;
	for (i = 0 ; i < s.size()-1 ; i++) {
		for (j = i; j < s.size() ; j++) {
			temp = s.substr(i,j-i+1);
			smt = 0;
			prev = s.find(temp);
			while (prev>=0 && prev<s.size()) {
				smt++;
				prev = s.find(temp,prev+1);
			}
			//cout << temp << " " << smt << endl;
			if (smt>=2) ans = max(ans,(int)temp.size());
		}
	}
	cout << ans << endl;
	return 0;
}