#include <bits/stdc++.h>
using namespace std;

int n,i,j,ans;
string s;
bool tanda;

bool cek(char c){
	if (!((c>='a' && c<='z') || (c>='A' && c<='Z'))) return false;
	return true;
}

int main(){
	while (getline(cin,s)) {
		ans = 0;
		tanda = false;
		for (i = 0 ; i<s.size() ;i++) {
			if (cek(s[i])) {
				if (i==0) {
					if (!cek(s[i+1])) ans++;
				}
				else if (i>=1 && i<=s.size()-2) {
					if (!cek(s[i+1]) || !cek(s[i-1])) {
						if (!cek(s[i+1]) && !cek(s[i-1])) ans++;
						else if (!cek(s[i-1])) {
							ans++;
							tanda = true;
						}
						else if (!cek(s[i+1]) && tanda) {
							tanda = false;
						}
						else if (!cek(s[i+1])) ans++;
					}
				}
				else if (!cek(s[i-1])) ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}