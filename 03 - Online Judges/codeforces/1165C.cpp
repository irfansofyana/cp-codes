#include <bits/stdc++.h>
using namespace std;

int n, cnt;
string s, ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> s;
	ret = "";
	for (int i = 0; i < n; i++){
		if (cnt % 2 == 0 && i < n-1){
			if (s[i] != s[i+1]) {
				ret += s[i];
				ret += s[i+1];
				i++;
				cnt += 2;
			}
		}	
	}
	cout << n - (int)ret.size() << '\n';
	cout << ret << '\n';
	return 0;
}