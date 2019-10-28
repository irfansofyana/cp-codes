#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

string s;
int A[27],i,j;

int main(){
	OPTIMASI
	cin >> s;
	for (i = 0; i < s.size(); i++) {
		A[(int)s[i]-'a']++;
	}
	for (i = 0 ; i< 26; i++) {
		if (A[i]>0) j++;
	}
	if (j<=2) cout <<  0 << '\n';
	else if (j>2)cout << j-2 << '\n';
	return 0;
}