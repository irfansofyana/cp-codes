#include <bits/stdc++.h>
using namespace std;

int n,i,j,k;
map<int,int> mep;
int A[500005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	k = 0;
	for (i = 0 ; i < n ; i++) {
		cin >> j;
		mep[j]++;
		A[k] = j; k++;
	}
	for (i = 0 ; i < k ; i++) {
		if (mep[A[i]]==1) {
			cout << A[i] << '\n';
			return 0;
		}
	}
	return 0;
}