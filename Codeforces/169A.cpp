#include <bits/stdc++.h>
using namespace std;

int n,a,b;
int A[20005];

int main(){
	cin >> n >> a >> b;
	for (int i=1;i<=n;i++) 
		cin >> A[i];
	sort(A+1,A+n+1);
	cout << A[b+1]-A[b] << endl;
	return 0;
}
