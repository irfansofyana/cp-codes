#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

struct paket{
	string asli,palsu;
};

int tc,n,m,i,j;
string s;
paket A[105];

int main(){
	OPTIMASI
	cin >> tc;
	while (tc--) {
		getline(cin,s);
		while (getline(cin,s) && s.size()>0) {
			cout << s << '\n';
		}
	}
	return 0;
}