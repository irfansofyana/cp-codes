#include <bits/stdc++.h>
using namespace std;

int t,n,i;
string s;

int main(){
	cin >> t;
	while (t--) {
		cin >> n >> s;
		int temp = 0;
		for (i=0;i<s.size();i++)
			if (s[i]=='P') temp++;
		if (temp==n) puts("mungkin mati lampu");
		else puts("tidak mati lampu"); 
	}
	return 0;
}
