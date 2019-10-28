#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j;
double temp,kons;
int tc;

int kuadrat(int k) {
	return k*k;
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		kons = double((n-1)/2);
		cout << "Case #" << ++tc << ":" << endl;
		for (i = 1 ; i <= n ; i++) {
			for (j = 1 ; j <= n; j++) {
				if (i==(n+1)/2 && j==(n+1)/2) cout << '*';
				else if (sqrt(kuadrat(i-(n+1)/2)+kuadrat(j-(n+1)/2))<=kons) cout << '*';
				else cout << '.';
			}
			cout << endl;
		}
	}
	return 0;
}