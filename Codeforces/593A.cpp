#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j;
string s[105];
int huruf[26];

int main(){
	OPTIMASI
	cin >> n;
	int ans = -1;
	for (i = 0 ; i < n ; i++) cin >> s[i];
	for (i = 0 ; i < 26; i++) {
		for (j = i+1 ; j < 26; j++) {
			char a,b;
			a = char(i+'a'); b = char(j+'a');
			int smt = 0;
			for (int k = 0 ; k < n ; k++) {
				bool cek = true;
				for (int l = 0 ; l < s[k].size(); l++){
					if (s[k][l]!=a && s[k][l]!=b) {
						cek = false; break;
					}
				}
				if (cek) smt += s[k].size();
			}
			ans = max(ans,smt);
		}
	}
	cout << ans << '\n';
	return 0;
}