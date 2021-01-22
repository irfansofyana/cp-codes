#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m,k;
int i,j;
double x,ans;
vector<vector<double> > A;
vector<double> B;

int main(){
	OPTIMASI
	cin >> n >> m >> k;
	A.assign(105,vector<double>());
	while (m--) {
		for (i = 0 ; i < n ; i++) {
			cin >> j >> x;
			j--;
			A[j].push_back(x);
		}
	}
	for (i = 0 ; i < n; i++) {
		double temp = -10000.00;
		for (j = 0 ; j < A[i].size(); j++) {
			temp = max(temp,A[i][j]);
		}
		B.push_back(temp);
	}
	/*for (i = 0 ; i < n ; i++){
		for (j =0 ; j < A[i].size(); j++){
			cout << A[i][j] << " ";
		}
		cout << '\n';
	} */
	sort(B.begin(),B.end());
	i = 0; j = B.size()-1;
	while (i!=k) {
		ans += B[j];
		i++; j--;
	}
	cout << fixed << showpoint << setprecision(1) ;
	cout << ans << '\n';
	return 0;
}