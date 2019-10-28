#include <bits/stdc++.h>
#define fi first
#define se second
#define OPTIMASI

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int a,b,x,y,n,v;
double ans;

double jarak(int x,int y){
	return (double)sqrt((abs(x-a)*abs(x-a) + abs(y-b)*abs(y-b)));
}

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	cin >> a >> b;
	cin >> n;
	ans = 1e9;
	while (n--) {
		cin >> x >> y >> v;
		ans = min(ans, jarak(x,y)/double(v));
	}
	cout << fixed << showpoint << setprecision(22) ;
	cout << ans << '\n';
	return 0;
}
