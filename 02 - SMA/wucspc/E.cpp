#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k;
int A[105][105];
vector<int> temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++) 
			cin >> A[i][j];
	}
	for (i = 1;  i < n ; i++) {
		for (j = 0 ; j < m ; j++) {
			temp.clear();
			for (k = j-1; k <= j+1; k++) {
				if (k>=0 && k < m) temp.push_back(A[i-1][k]);
			}	
			sort(temp.begin(),temp.end());
			A[i][j] = A[i][j]+temp[0];
		}
	}
	/*for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++)
			cout << A[i][j] << " ";
		cout << '\n';
	}*/
	int ans = 1000000000;
	for (i = 0 ; i < m ; i++) {
		ans = min(ans,A[n-1][i]);
	}
	cout << ans << '\n';
	return 0;
}