#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int k;
ll n,ans,A[4]={180000,300000,400000,300000};
ll p[4]={0,10,15,20},i;
double temp;

int main(){
	cin >> k;
	int tc = 0;
	while (k--) {
		ans = 0; temp = 0;
		cin >> n;
		for (i = 0 ; i < 4; i++) {
			if (i==0 && n>=A[i]) {
				n-=A[i]; 
			}
			else if (i>0){
				if (n>=A[i]){
					ans += ceil(double(p[i]*A[i])/100);
					temp += double(p[i]*A[i])/100;
					n -= A[i];
				}
				else {
					ans += ceil(double(p[i]*n)/100);
					temp += double(p[i]*n)/100;
					break;
				}
			}
			else break;
		}
		if (i==4) {
			ans += ceil(double(25*n)/100);
			temp += double(25*n)/100;
		}
		if ((ans>0 && ans<2000)) ans = 2000;
		cout << "Case " << ++tc << ": " << ans << '\n';
	}
	return 0;
}