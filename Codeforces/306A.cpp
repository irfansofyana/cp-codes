#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,j,idx,u1,u2;
int pos1[100005],pos2[100005];
int main() {
	cin >> s;
	i = 0;
	while (s.find("AB",i)>=0 && s.find("BA",i)<s.size()) {
		pos1[idx] = s.find("AB",i);
		i = s.find("AB",i)+2;
		idx++;
	}
	u1 = idx;
	i = 0;
	idx = 0;
	while (s.find("BA",i)>=0 && s.find("BA",i)<s.size()) {
		pos2[idx] = s.find("BA",i);
		i = s.find("AB",i)+2;
		idx++;
	}
	u2 = idx;
	bool ans = false;
	for (i=0;i<u1;i++) {
		for (j=0;j<u2;j++) {
			if (abs(pos1[i]-pos2[j])>=2) {
				ans = true;
				break;
			}
		}
		if (ans) break;
	}
	if (ans) puts("YES");
	else puts("NO");
}
