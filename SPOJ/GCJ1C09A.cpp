#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int t,tc;
ll ans,res,i,j;
string s;
map<char,int> mep;
map<char,bool> udah;
int curr;
vector<int> arr;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> s;
		curr = 0;
		mep.clear();
		udah.clear();
		arr.clear();
		for (i = 0 ; i < s.size(); i++) {
			if (i == 0) {
				mep[s[i]] = 1;
				udah[s[i]] = true;
				curr = 1;
				arr.push_back(1);
			}
			else if (i == 1) {
				if (udah[s[i]]) {
					arr.push_back(1);
				}
				else {
					udah[s[i]] = true;
					mep[s[i]] = 0;
					arr.push_back(0);
					curr++;
				}
			}
			else {
				if (udah[s[i]]) {
					arr.push_back(mep[s[i]]);
				}
				else {
					udah[s[i]] = true;
					if (curr == 1) {
						mep[s[i]] = 0;
						curr++;
					} 
					else {
						mep[s[i]] = curr;
						curr++;
					}
					arr.push_back(mep[s[i]]);
				}
			}
		}
		ans = 0; res = 1; j = (curr == 1 ? 2 : curr);
	//	for (i = 0 ; i < arr.size(); i++) cout << arr[i] ;
	//	cout << '\n';
	//	cout << curr << '\n';
		for (i = (int)arr.size()-1 ; i >= 0 ; i--) {
			ans += res*arr[i];
			res *= j;
		}
		cout << "Case #" << ++tc << ": " << ans << '\n';
	}
	return 0;
}
