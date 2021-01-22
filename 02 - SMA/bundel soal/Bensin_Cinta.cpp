#include <bits/stdc++.h>
using namespace std;

long int t,a,m,c,k,b;
long int tc;
long int ans;

int main() {
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> a >> m >> c >> k >> b;
		if (a<c && a<k) cout<<"Kasus #"<<++tc<<": putus\n";
		else if (a>=k) cout<<"Kasus #"<<++tc<<": 0\n";
		else {
			if (m-2*c==0) {
				if (m+a-2*c<k) cout<<"Kasus #"<<++tc<<": putus\n";
				else cout<<"Kasus #"<<": "<<2<<endl;
			}
			else {
				ans = ceil((k+2*c-m-a)/double(m-2*c))+1;
				if (2*ans>b) cout<<"Kasus #"<<++tc<<": putus\n";
				else cout<<"Kasus #"<<++tc<<": "<<2*ans<<endl; 
			}
		}
	}
}
