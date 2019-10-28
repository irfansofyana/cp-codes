#include <bits/stdc++.h>
using namespace std;

int ans,i,j,d;
int n;
long long A[100005];

int main() {
	cin.tie(0);
	cin >> n >> d ;
	for (i=0;i<n;i++) 
		cin >> A[i];
	ans = i  = 1;
	while (i<n) {
		if (abs(A[i]-A[i-1])<d) i++;
		else if (abs(A[i]-A[i-1])>=d) {
			ans++;
			i++;
		}
	}
	cout << ans << endl;
}
