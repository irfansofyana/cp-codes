#include <bits/stdc++.h>
using namespace std;

int t,i,j;
int A[1000005];

int main(){
	cin.tie(0);
	cin >> t;
	for (i = 0 ; i < t ; i++) 
		cin >> A[i];
	sort(A,A+t);
	for (i = 0 ; i < t ; i++)
		cout << A[i] << endl;
	return 0;
}