#include <bits/stdc++.h>
using namespace std;

int k,i,j,depan,akhir;
bool ans;
string s,temp;

bool cek(string s){
	int d,a;
	d = 0; a = s.size()-1;
	while (d<=a) {
		if (s[d]!=s[a]) return false;
		else {
			d++;
			a--;
		}
	}
	return true;
}
int main(){
	cin >> s >> k;
	akhir = (s.size()/k)-1;
	if (s.size()%k!=0) ans = false;
	else ans = true;
	if (s.size()%k==0)
		while (akhir<s.size()) {
			temp = s.substr(depan,akhir-depan+1);
			if (!cek(temp)) {
				ans = false;
				break;
			}
			else {
				depan += (s.size()/k);
				akhir += (s.size()/k);
			}
		}
	if (ans) puts("YES");
	else puts("NO");
	return 0;
}

