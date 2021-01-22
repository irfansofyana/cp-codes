#include <bits/stdc++.h>
#define PI 3.14159265
using namespace std;

double dsin,ans;
long long h,v,temp;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin >> h >> v;
	dsin = sin(double(v)*PI/180);
	ans = double(h/dsin);
	temp = 10000000*floor(ans);
	ans = 10000000*ans;
	//cout << temp << " " << ans << endl;
	if ((long long)ans-temp!=0) cout << ceil(ans/10000000) << endl;
	else cout << floor(ans/10000000) << endl;
	return 0;
}