#include <bits/stdc++.h>
using namespace std;

int h,d,u,f;
int ans;
double prev,naik,turun,target;
double kurang;
bool bisa;

int main(){
	cin.tie(0);
	while (cin >> h >> u >> d >> f && h!=0 && d!=0 && u!=0 && f!=0) {
		prev = 0.0; naik = (double)u; turun = (double)d; 
		ans = 0; kurang = double(f*u)/double(100); target = (double)h;
		bisa = true;
		while (prev>=0 && prev<target) {
			ans++;
			if (naik>=0) prev+=naik;
			if (prev>target) {
				break;
			}
			else prev-=turun;
			if (prev<0) {
				bisa = false;
				break;
			}
			naik-=kurang;
		}
		if (bisa) cout << "success" ;
		else cout << "failure" ;
		cout << " on day " << ans << endl;
 	}
	return 0;
}