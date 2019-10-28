#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int tc,t,n,i,j;
string s,anss;
map<string,int> mep;
string A[105];

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		mep.clear();
		for (i = 0 ; i < n ; i++) {
			cin >> s;
			A[i] = s.substr(s.find('@')+1,s.size()-(s.find('@')+1));
			mep[A[i]]++;
		}
		int ans = 0;
		for (i = 0 ; i < n ; i++) {
			if (mep[A[i]]>ans) {
				ans = mep[A[i]];
				anss = A[i];
			}
			else if (mep[A[i]]==ans) {
				if (A[i]<anss) anss = A[i];
			}
		}
		cout << "Kasus #" << ++tc << ": " << anss << '\n';
	}
	return 0;
}