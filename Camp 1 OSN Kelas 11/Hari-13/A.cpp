#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,tc,t,ta,tw,ans,tg;
int sum,temp,x,awal,akhir;
int A[20005];

int main(){
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 1 ; i< n ; i++)
			cin >> A[i];
		awal = akhir = ta = tw = tg = 0;
		i = 1; sum = 0;  ans = 0;
		while (i<n) {
			sum += A[i];
			//cout << sum << endl;
			if (sum<0) {
				sum = 0;
				tg = i;
			}
			if (sum>ans || (sum==ans && i-tg>akhir-awal)) {
				ans = sum;
				akhir = i;
				awal = tg;
			}
			i++;
		}
		if (ans<=0) cout << "Route " << ++tc << " has no nice parts" << endl;
		else cout << "The nicest part of route " << ++tc << " is between stops " << awal+1<< " and " << akhir+1 << endl;
	}
	return 0;
}