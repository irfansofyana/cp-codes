#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0); cout.tie(0);
using namespace std;

int t,n,i,j;
int frek[100005];

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		memset(frek,0,sizeof frek);
		for (i = 0 ; i < n ; i++) {
			cin >> j;
			frek[j]++;
		}
		for (i = 1 ; i <= 100000; i++) {
			if (frek[i]%2==1) {
				cout << i << '\n';
				break;
			}
		}
	}
	return 0;
}