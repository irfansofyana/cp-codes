#include <bits/stdc++.h>
using namespace std;

string s[]={"TTT","TTH","THT","THH","HTT","HTH","HHT","HHH"};
int n,m,i,j,t;
map<string,int> mep;
string masuk;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> masuk;
		mep.clear();
		for (i = 0 ; i <= 37; i++) {
			string temp="";
			temp = temp+masuk[i];
			temp = temp+masuk[i+1];
			temp = temp+masuk[i+2];
			mep[temp]++;
		}
		cout << n << " ";
		for (i = 0 ; i < 8; i++) {
			cout << mep[s[i]];
			cout << (i==7?'\n':' ');
		}
	}
	return 0;
}