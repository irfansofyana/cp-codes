#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j;
int a,b,c;
int tc;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		a = 0 ; b = 0; c = 0 ;
		string s;
		for (i = 0 ; i < n ; i++) {
			cin >> s;
			if (s.size()==4) a++;
			else if (s.size()==5) b++;
			else if (s.size()==6) c++;
		}
		cout << "Case #" << ++tc << ": " << a << " " << b << " " << c << '\n';
	}
	return 0;
}