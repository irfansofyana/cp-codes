#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
#define UNIQUE(s) s.resize(unique(s.begin(),s.end())-s.begin()); 
using namespace std;

int t,tc,i,j;
string s;

int main(){
	OPTIMASI
	cin >> t;
	while (t--){
		cin >> s;
		sort(s.begin(),s.end());
		UNIQUE(s);
		cout << s.size() << '\n';
	}
	return 0;
}