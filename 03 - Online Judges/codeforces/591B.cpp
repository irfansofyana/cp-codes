#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
string s;
char maju[26],x,y;
bool tanda[26];

int main(){
	cin >> n >> m >> s;
	for (i = 0 ; i < 26; i++) {
		maju[i] = char(i+'a');
	}
	while (m--) {
		memset(tanda,false,sizeof tanda);
		cin >> x >> y;
		for (j = 0 ; j < 26 ; j++) {
			if (maju[j]==x){
				tanda[j] = true;
				maju[j] = y;
			}
		}
		for (j = 0 ; j < 26 ; j++) {
			if (maju[j]==y && !tanda[j]) maju[j] = x;
		}
	}
	for (i = 0 ; i < s.size(); i++)
		cout << maju[(int)s[i]-'a'];
	cout << '\n';
	return 0;
}