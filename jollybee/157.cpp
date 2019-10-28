#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

string s;
int n,t,tc,i,j;

string ngecek(string s){
	string temp1,temp2;
	int idx,idxx;
	if ((int)s.size()%2==1) return s;
	else {
		temp1 = s.substr(0,(s.size()/2));
		temp2 = s.substr(s.size()/2,s.size()-(s.size()/2));
		idx = 0; idxx = temp1.size()-1;
		while (idx<=idxx) {
			if (temp1[idx]!=temp2[idxx]) break;
			else {
				idx++; idxx--;
			}
		}
		if (idx>idxx) return ngecek(temp1);
		else return s;
	}
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> s;
		cout << "Case #" << ++tc << ": " << ngecek(s) << '\n';
	}
	return 0;
}