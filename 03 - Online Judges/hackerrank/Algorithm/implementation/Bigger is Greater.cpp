#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(a) (int)a.size()

using namespace std;

int n,i,j;
string s,ss;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	while (n--) {
		cin >> s;
		ss = s;
		sort(ss.begin(),ss.end());
		next_permutation(s.begin(),s.end());
		cout << (ss == s ? "no answer" : s) << '\n';
	}
	return 0;
}
