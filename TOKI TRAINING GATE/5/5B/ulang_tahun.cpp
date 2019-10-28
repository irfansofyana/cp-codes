#include <bits/stdc++.h>
using namespace std;

int n,q,i;
map <string,string> mep;
string s,temp;

int main(){
	cin >> n >> q;
	for (i=0;i<n;i++){
		cin >> s >> temp;
		mep[s] = temp;
	}
	for (i=0;i<q;i++) {
		cin >> s;
		cout<<mep[s]<<endl;
	}
	return 0;
}
