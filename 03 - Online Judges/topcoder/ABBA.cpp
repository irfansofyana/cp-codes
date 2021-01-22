#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int siz;
string a,b;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b;
	while (b.size() > a.size()) {
		siz = (int)b.size();
		if (b[siz-1] == 'A') 
			b = b.substr(0,siz-1);
		else {
			b = b.substr(0,siz-1);
			reverse(b.begin(),b.end());
		}
	}
	cout << (a != b ? "Impossible" : "Possible") << '\n';
	return 0;
}
