#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[110][110];
bool ans[110];
vector<int> jaw;
int banyak;

int main() {
	cin >> n;
	memset(ans,true,sizeof ans);
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
			cin >> A[i][j];
	for (i=1;i<=n;i++) 
		for (j=1;j<=n;j++) {
			if (A[i][j]==-1 || A[i][j]==0) continue;
			else if (A[i][j]==1) ans[i] = false;
			else if (A[i][j]==2) ans[j] = false;
			else if (A[i][j]==3) {
				ans[i] = ans[j] = false;
			}
 		}
 	for (i=1;i<=n;i++) {
 		if (ans[i]) {
 			banyak++;
 			jaw.push_back(i);
 		}
 	}
 	cout << banyak << endl;
 	for (i=0;i<jaw.size();i++) {
 		if (i==jaw.size()-1) cout<<jaw[i]<<endl;
 		else cout<<jaw[i]<<" ";
 	}
 	return 0;
}
