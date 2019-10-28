#include <bits/stdc++.h>
using namespace std;

double total,awal;
vector<pair<double,int > > ans;
int i;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> total >> awal && (total||awal)) {
		ans.clear();
		cout << fixed << showpoint;
		cout << setprecision(3);
		i = 1;
		while (total>awal) {
			double temp = total/i;
			if (temp<=awal) break;
			else {
				double x = (0.3)*(sqrt(temp-awal));
				x *= i;
				ans.push_back(make_pair(x,i));
				i++;
			}
		}
		sort(ans.begin(),ans.end());
		//for (i = 0 ; i < ans.size(); i++) cout << ans[i].first << " " << ans[i].second << '\n';
		int ii,jj;
		ii = (int)ans.size()-1; jj = (int)ans.size()-2;
		if ((int)(1000*ans[ii].first)==(int)(1000*ans[jj].first)) cout << 0;
		else if (ans.size()==0) cout << 0;
		else cout << ans[ii].second ;
		cout << '\n';
	}
	return 0;
}