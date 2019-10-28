#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(s) (int)s.size()
#define OPTIMIZE ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long LL;
typedef pair<int,int> ii;
typedef pair<LL,LL> pll;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<ii> vii;
typedef vector<pll> vll;

int hour, minute;
double ans;

int main(){
    cout << fixed << showpoint << setprecision(3);
    while (cin >> hour >> c >> minute){
    	if (hour == 0 && minute == 0) return 0;
    	ans = min(hour, 12-hour) * 30 + minute * 6 - 0.5 * minute;
    	ans = min(ans, 360.000-ans);
    	cout << ans << '\n';
    }
	return 0;
}