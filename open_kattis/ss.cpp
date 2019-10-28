#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

string s,temp;
int tc,i,j;
bool pertama;

int main(){
	OPTIMASI
	cin >> tc;
	getline(cin,s);
	while (tc--) {
		getline(cin,s);
		if (s.substr(0,10)=="simon says") 
			cout << s.substr(11,s.size()-11) << endl;
		else cout << endl;
	}
	return 0;
}