#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,ans;
char A[55][55];
string s;
char a[30];

int main(){
	cin >> n >> m;
	for (i=0;i<n;i++)
		for (j=0;j<m;j++) 
			cin >> A[i][j];
	for (i=0;i<n-1;i++) {
		for (j=0;j<m-1;j++) {
			memset(a,0,sizeof a);
			a[A[i][j]-'a'+1] = 1;
			a[A[i][j+1]-'a'+1] = 1;
			a[A[i+1][j]-'a'+1] = 1;
			a[A[i+1][j+1]-'a'+1] = 1;
			if (a[1]==1 && a[3]==1 && a[5]==1 && a[6]==1) ans++;
		}
	}
	cout << ans << endl;
}
