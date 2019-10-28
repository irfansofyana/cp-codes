#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j;
int maks;
string s;

int main(){
	OPTIMASI
	cin >> n;
	int ans;
	for (i = 0 ; i < n ; i++) {
		cin >> s;
		int temp = 0;
		for (j = 0 ; j < s.size(); j++) {
			if (s[j]=='.') temp++;
			else temp += 2;
		}
		if (i==0) {
			maks = temp;
			ans = i+1;
		}
		else if (temp>maks) {
			maks = temp;
			ans = i+1;
		}
	}
	cout << ans << '\n';
	return 0;
}