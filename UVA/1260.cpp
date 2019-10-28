#include <bits/stdc++.h>
using namespace std;

int tc,n,i,j;
int A[1005];
int sum;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) {
			cin >> A[i];
		}
		sum = 0 ;
		for (i = 1 ; i < n ; i++) {
			int temp = 0;
			for (j = 0 ; j <= i-1; j++)
				if (A[j]<=A[i]) temp++;
			//cout << temp << '\n';
			sum += temp;
		}
		cout << sum << '\n';
 	}
	return 0;
}