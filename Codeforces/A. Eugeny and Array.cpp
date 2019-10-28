#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,temp,x,y;
int A[2];

int main(){
	cin >> n >> m;
	for (i=0;i<n;i++){
		cin >> temp;
		if (temp==-1) A[0]++;
		else A[1]++;
	}
//	cout << A[0] << A[1] << endl;
	for (i=0;i<m;i++) {
		cin >> x >> y;
		j = y-x+1;
		if (j%2==0 && A[0]>=(j/2) && A[1]>=(j/2)) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
