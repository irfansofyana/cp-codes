#include <bits/stdc++.h>
using namespace std;

int n,i,j,m,k,temp,last;
int A[100005];
long long putus,ans;
bool temu = false;

int main(){
	cin.tie(0);
	cin >> n >> k;
	last = 1;
	while (k--) {
		cin >> m;
		for (i = 0 ; i < m ; i++) {
			cin >> A[i];
		}
		temu = false;
		for (i = 0 ; i < m-1 ; i++) {
			if (A[i+1]-A[i]!=1) putus++;
			else if (A[i+1]-A[i]==1 && A[i]==1) {
				j = i+1;
				temu = true;
				break;
			}
			else putus++;
		}
		if (temu) {
			while (j<m && A[j]-A[j-1]==1) j++;
			last = A[j-1];
			temp = j-1;
			putus += m-(temp+1);
		}
	}
	cout << n-last+putus << endl;
	return 0;
}