#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int maks,x;
bool udah[55];
vector<int> ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		maks = -1000000000;
		for (j = 0 ; j < n ; j++) {
			cin >> x;
			if (x!=0) maks = max(maks,x);
		}
		ans.push_back(maks);
	}
	memset(udah,false,sizeof udah);
	for (i = 0 ; i < ans.size(); i++) {
		for (j = ans[i]; j <= n ; j++){
			if (!udah[j]) {
				cout << j;
				udah[j] = true;
				break;
			}
		}
		(i==(int)ans.size()-1) ? cout << '\n' : cout << ' ';
	}
	return 0;
}