#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int sum;
int t;

int gcd(int x,int y){
	return (y==0 ? x:gcd(y,x%y));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n, n > 0) {
		sum = 0;
		for (i = 0 ; i < n ; i++) {cin >> m; sum += m;}
		cout << "Case " << ++t << ":" << endl;
		if (sum >= 0 && sum%n==0) cout << sum/n << endl;
		else if (sum < 0 && (abs(sum)%n)==0) cout << "- " << abs(sum)/n << endl;
		else if (abs(sum) > n) {
			int fpb = gcd(abs(sum),n);
			sum /= fpb; n /= fpb;
			int b_a,b_b,b_c;
			int a,b,c,ta,tb,tc;
			a = abs(sum)/n; b = abs(sum)%n; c = n;
			ta = a; tb = b; tc = c;
			b_a = 0;
			while (ta > 0) {
				b_a ++;
				ta /= 10;
			}
			b_b = 0;
			while (tb > 0) {
				b_b ++;
				tb /= 10;
			}
			b_c = 0;
			while (tc > 0){
				b_c++;
				tc /= 10;
			}
			int tengah = (b_c)+(b_a);
			if (sum < 0) tengah += 2;
			for (i = 0 ;i < tengah-b_b; i++) cout << " "; cout << b << endl;
			if (sum < 0){
				cout << "- " << a; for (i = 0 ;i < b_c; i++) cout << '-'; cout << endl;
			}
			else {
				cout << a ; for (i = 0 ;i < b_c; i++) cout << '-'; cout << endl;
			}
			for (i = 0 ; i < tengah-b_c; i++) cout << " "; cout << c << endl;
		}
		else {
			int fpb = gcd(abs(sum),n);
			sum /= fpb; n /= fpb;
			int ta,tb;
			int ba,bb;
			int a,b;
			a = abs(sum); b = n; ta = a; tb = b;
			ba = 0; bb=0;
			while (ta > 0) {
				ba++;
				ta/=10;
			}
			while (tb > 0) {
				bb++;
				tb /= 10;
			}
			int tengah = bb;
			if (sum < 0) tengah += 2;
			for (i = 0 ; i < tengah-ba; i++) cout << " "; cout << a << endl;
			if (sum < 0) {
				cout << "- "; for (i = 0 ; i < bb ; i++) cout << '-'; cout << endl;
			}
			else {
				for (i = 0 ; i < bb ; i++) cout << '-'; cout << endl;
			}
			for (i = 0 ; i < tengah-bb; i++) cout << " "; cout << b << endl;
		}
	} 
	return 0;
}