#include <bits/stdc++.h>
using namespace std;

long long n,m,i,j;
long long A[3];
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	long long ans =0;
	for (i = 0 ; i < s.size(); i++){
		if (s[i]=='1') ans += A[2];
		else if (s[i]=='0') ans += A[1]+A[2];
		A[(int)s[i]-'0']++;
	}
	cout << ans << '\n';
	return 0;
}