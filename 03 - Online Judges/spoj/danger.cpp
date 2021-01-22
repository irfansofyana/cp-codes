#include <bits/stdc++.h>
using namespace std;

int n,ans,i;
string s;

int solve(int x){
	if (x == 1) return 1;
	int res = 1;
	for (int z = 1 ; z > 0 ; z++) {
		res *= 2;
		if (res > x) {
			res /= 2;
			break;
		}
	}
	return 2*(x-res+1)-1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> s){
		if (s == "00e0") return 0;
		n = 10*(s[0]-'0') + s[1]-'0';
		for (i = 0 ; i < s[3]-'0'; i++) n *= 10;
		cout << solve(n) << '\n';
	}
	return 0;
}