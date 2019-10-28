#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m,i,j;
int temp;
vector<int> A;

int main(){
	OPTIMASI
	cin >> n;
	int ans = 0;
	for (i = 2 ; i <= n ; i++) {
		temp = i; int frek = 0;
		for (j = 2 ; j <= temp ; j++) {
			if (temp%j==0) {
				frek++;
				while (temp%j==0) temp/=j;
			}
		} 
		if (frek==1) {
			ans++;
			A.push_back(i);
		}
	}
	cout << ans << '\n';
	for (i = 0 ; i < A.size(); i++ ) {
		cout << A[i];
		cout << (i==A.size()-1?'\n':' ');
	}
	return 0;
}