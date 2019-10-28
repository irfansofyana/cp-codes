#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

double a,b;
int tc,t,n,i,j;
double sum,C[5000],ans;

int main(){
	OPTIMASI
	cin >> t;
	while (t--){
		cin >> n;
		cin >> a >> b;
		sum = 0.0;
		for (i = 1 ; i<=n; i++) {
			cin >> C[i];
			sum += C[i];
		}
		ans = sum;
		for (i = n ; i>=2; i--) {
			sum -= C[i];
			ans += sum;
		}
		cout << fixed << showpoint;
		cout << setprecision(2);
		cout << (b+double(n)*a+(-2)*ans)/double(n+1) << endl;
		if (t!=0) cout << endl;
	}
	return 0;
}