#include <bits/stdc++.h>
using namespace std;

string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	cout << s ;
	reverse(s.begin(),s.end());
	cout << s << '\n';
	return 0;
}
