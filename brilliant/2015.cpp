#include <bits/stdc++.h>
using namespace std;

int i;
string s;

string ubah(int k) {
	stringstream ss;
	ss<<k;
	return ss.str();
}

int main(){
	s="";
	for (i=1;i<=2015;i++){
		s=s+ubah(i);
	}
	int ans=0;
	i=0;
	while (i<s.size()-1) {
		if (s[i]=='1' && s[i+1]=='5') {
			i+=2;
			ans++;
		}
		else i++;
	}
	cout << ans << endl;
}
