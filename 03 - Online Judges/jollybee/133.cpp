#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,a,b,c;
int i,tc;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		a = b = c = 0;
		for (i = 0 ; i < n ; i++) {
			int x;
			cin >> x;
			if (x==1) a++;
			else if (x==2) b++;
			else c++;
		}
		a = min(a,b);
		a = min(a,c);
		cout << "Kasus #" << ++tc << ": " << a << '\n'; 
	}
	return 0;
}