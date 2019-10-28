#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
string a,b;
int i,j,t,tc;
vector<int> jaw;

bool comp(int a,int b){
	return a>b;
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> a >> b;
		int ans = 0; jaw.clear();
		for (i = 0 ; i < a.size(); i++) {
			if (a[i]!=b[i]) {
				int temp = abs(((int)a[i]-'A')-((int)b[i]-'A'));
				jaw.push_back(min(temp,26-temp));
			}
		}
		sort(jaw.begin(),jaw.end(),comp);
		for (i = 0 ; i < jaw.size(); i++) {
			ans += (i+1)*jaw[i];
		}
		cout << "Kasus " << ++tc << ": " << ans << '\n';
	}
	return 0;
}