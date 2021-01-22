#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

string s,ans;
char A[50]={'`','1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T'
	,'Y','U','I','O','P','[',']','//','A','S','D','F','G','H','J','K','L',';','''',
	'Z','X','C','V','B','N','M',',','.','/'};
int i,j;

int main(){
	getline(cin,s);
	ans = "";
	for (i = 0; i < s.size() ; i++) {
		if (s[i]==" ") ans = ans+s[i];
		else {
			for (j = 0; j < 50 ; j++) {
				if (A[j]==s[i]) {
					ans = ans+A[j-1];
					break;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}