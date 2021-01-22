#include <bits/stdc++.h>
using namespace std;

long long n,i,j;
long long A[50];

int main(){
	A[1] = 3; A[2] = 9;
	for (i = 3 ; i <= 30 ; i++)
		A[i] = 2*(A[i-1]-A[i-2])+3*A[i-2];
	cin >> n;
	cout << A[n] << endl;
 	return 0;
}