#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

string s,ss;
int n,m,i,j;
int A[30],B[30];

int main(){
	OPTIMASI
	cin >> s;
	for (i = 0 ; i < s.size(); i++) 
		A[s[i]-'a']++;
	cin >> n;
	while (n--) {
		cin >> ss;
		memset(B,0,sizeof B);
		for (i = 0 ; i < ss.size(); i++) 
			B[ss[i]-'a']++;
		int ans = 100000000;
		for (i = 0 ; i < 26 ; i++) {
			if (B[i]>0) {
				ans = min(ans,A[i]/B[i]);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}