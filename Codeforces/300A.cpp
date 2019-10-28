#include <bits/stdc++.h>
using namespace std;

string s,temp;
int i,j;
bool ans = false;
int main(){
	ios_base::sync_with_stdio(0);
	
	cin >> s;
	for (i=0;i<s.size();i++){
		for (j=i;j<s.size();j++){
			temp = s.substr(0,i)+s.substr(j+1,s.size()-(j+1));
			if (temp=="CODEFORCES") {
				puts("YES");
				ans = true;
				break;
			}
		}
		if (ans) break;
	}
	if (!ans) puts("NO");
	return 0;
}