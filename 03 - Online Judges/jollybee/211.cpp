#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n,i,j,A[1005];
ll ans;
double rata;

int main(){
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> A[i];
		ans += A[i];
	}
	rata = double(ans)/n;
	sort(A,A+n);
	for (i = 0 ; i < n ; i++) {
		if (double(A[i])>rata) break;
	}
	cout << (i==0?A[0]:A[i-1]) << '\n';
	return 0;
}