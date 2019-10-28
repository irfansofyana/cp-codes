#include <bits/stdc++.h>
using namespace std;

string ubah(int k){
	stringstream ss;
	ss << k;
	return ss.str();
}

string s;
int n,i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	s = "";
	for (i = 1 ; i <= 1000 ; i++) {
		s = s + ubah(i);
	}
	//cout << s.size() << '\n' ;
	n--;
	cout << s[n] << '\n';
	return 0;
}