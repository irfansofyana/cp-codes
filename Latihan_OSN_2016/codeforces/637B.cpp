#include <bits/stdc++.h>
using namespace std;

map<string,int> mep;
int n,i,j;
vector<string> arr;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		string s;
		cin >> s;
		arr.push_back(s);
	}
	for (i = n-1 ; i >= 0 ; i--) {
		if (mep[arr[i]]==0) {
			mep[arr[i]] = -1;
			cout << arr[i] << '\n';
		}
	}
	return 0;
}