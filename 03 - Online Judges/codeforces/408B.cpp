#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,ans;
int A[26],B[26];
string s1,s2;

int main(){
	cin.tie(0);
	cin >> s1 >> s2;
	for (i=0;i<s1.size();i++) 
		A[s1[i]-'a']++;
	for (i=0;i<s2.size();i++)
		B[s2[i]-'a']++;
	for (i=0;i<26;i++) {
		if (B[i]>0 && A[i]==0) {
			puts("-1");
			return 0;
		}
		else if (B[i]>0 && A[i]>0) {
			ans += min(B[i],A[i]);
		}
	}
	cout << ans << endl;
	return 0;
}
