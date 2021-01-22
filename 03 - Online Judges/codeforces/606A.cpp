#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;
ll A[3];
ll B[3],sum,i;

int main(){
	OPTIMASI
	for (i = 0 ; i < 3; i++) cin >> A[i];
	for (i = 0 ; i < 3 ; i++) cin >> B[i];
	for (i = 0 ; i < 3 ; i++) {
		if (A[i]>B[i]) sum += (A[i]-B[i])/2;
		else sum = sum-(B[i]-A[i]);
	}
	cout << (sum>=0?"Yes":"No") << '\n';
	return 0;
}