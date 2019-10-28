#include <bits/stdc++.h>
using namespace std;

string s;
int n,hutang,i;
bool ans;

int main(){
	cin >> s;
	if (s.size()%2==1) puts("TIDAK");
	else {
		if (s[0]=='}' || s[s.size()-1]=='{') ans = false;
		else ans = true;
		if (ans) {
			i = 0;
			while (i<s.size()){ 
				if (s[i]=='{') hutang++;
				else if (s[i]=='}') hutang--;
				i++;
			}
			if (hutang==0) puts("YA");
			else puts("TIDAK");
 		}
		else puts("TIDAK");
	}
	return 0;
}
