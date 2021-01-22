#include <bits/stdc++.h>
using namespace std;

string s[110];
int n,i,maks;
map<string,int> mep;

int main(){
	cin.tie(0);
	cin >> n;
	for (i=0;i<n;i++) {
		cin >> s[i];
		mep[s[i]]++;
	}
	maks = -1;
	for (i=0;i<n;i++) {
		maks = max(maks,mep[s[i]]);
	}
	cout << maks << endl;
}
