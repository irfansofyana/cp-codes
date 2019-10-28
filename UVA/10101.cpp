#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int tc;
ll n,arr[] = {10000000, 100000, 1000, 100},i,j;
string s[] = {"kuti","lakh","hajar","shata"};
ll jaw[4];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		for (i = 0 ; i <4 ; i++) cout << " ";
		cout << ++tc << ".";
		for (i = 0 ; i < 4 ; i++) {
			jaw[i] = (n/arr[i]);
			n -= arr[i] * jaw[i];
		}
		for (i = 0 ; i < 4 ; i++) {
			if (jaw[i] == 0) continue;
			else {
				cout << " " << jaw[i] << " " << s[i];
			}
		}
		if (n > 0) cout << " " << n ;
		cout << '\n';
	}
	return 0;
}
