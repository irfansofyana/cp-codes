#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int m,i,j;
string a,b="duck";
int t,tc;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> a;
		j = 0;
		for (i = 0 ; i < a.size(); i++) 
			if (a[i]==b[j]) j++;
		cout << "Case #" << ++tc << ": ";
		if (j==b.size()) cout << "YES";
		else cout << "NO";
		cout << '\n';
	}
	return 0;
}