#include <bits/stdc++.h>
using namespace std;

string s,temp;
int i,j,k,pos;
vector<string> ans;
vector<int> tempat;

int main(){
	cin.tie(0);
	cin >> s;
	pos = s.find('@');
	if (!(pos>=0 && pos<s.size())) puts("No solution");
	else {
		tempat.push_back(pos);
		pos = s.find('@',pos+1);
		while (pos>=0 && pos<s.size()) {
			tempat.push_back(pos);
			pos = s.find('@',pos+1);
		}
		if (tempat[0]==0 || tempat[tempat.size()-1]==s.size()-1) puts("No solution");
		else {
			for (i=1;i<tempat.size();i++) {
				if (tempat[i]-tempat[i-1]<3) {
					puts("No solution");
					break;
				}
			}
			if (i==tempat.size()) {
				for (i=0;i<tempat.size();i++) {
					temp = "";
					if (i==0 && tempat.size()!=1) {
						temp = temp+s.substr(0,tempat[i]+1);
						temp = temp+s[tempat[i]+1];
					}
					else if (i==0) {
						temp = s;
					}
					else {
						temp = temp+s.substr(tempat[i-1]+2,tempat[i]-(tempat[i-1]+2)+1);
						if (i==tempat.size()-1) temp = temp+s.substr(tempat[i]+1,s.size()-(tempat[i]+1));
						else temp = temp + s[tempat[i]+1];
					}
					ans.push_back(temp);
				}
				for (i=0;i<ans.size();i++) {
					if (i==ans.size()-1) cout << ans[i] << endl;
					else cout << ans[i] << ',';
				}
			}
		}
	}
	return 0;
}
