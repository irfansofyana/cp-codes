#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[]={6,2,5,5,4,5,6,3,7,6};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a,b;
	cin >> a >> b;
	int ans = 0;
	for (i = a; i <= b; i++) {
		j = i;
		while (j>0) {
			ans += A[j%10];
			j/=10;
		}
	}
	cout << ans << '\n';
	return 0;
}