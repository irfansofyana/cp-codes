#include <bits/stdc++.h>
using namespace std;

string s,t;
int n,i,j;
int _last;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s >> t;
	while (s.find(t) >= 0 && s.find(t) < (int)s.size() ) {
		i = s.find(t);
		s.erase(i,(int)t.size());
	}
	cout << s << '\n';
	return 0;
}