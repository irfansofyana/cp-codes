#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int A[10005],B[55];
int target,bil;
int sum;
vector<int> jaw;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	sort(A,A+n);
	cin >> m; target = n%m; bil = (n/m);
	
	for (i = 0 ; i < (1<<m); i++){
		int frek = 0;
		for (j = 0 ; j < m; j++) {
			if ((i&(1<<j))>0) {
				frek++;
				B[j] = bil+1;
			}
			else B[j] = bil;
		}
		/*for (j = 0 ; j < m ; j++) {
			cout << B[j] << " ";
		}
		cout << " tot " << frek << '\n'; */
		if (frek==target){
			sum = 0; bool gagal = true; 
			jaw.clear();
			for (j = 0 ; j < m-1 ; j++) {
				sum += B[j];
				if (A[sum-1]+1 > A[sum]){gagal = false; break;}
				else jaw.push_back(A[sum-1]+1);
			}
			if (gagal) {
				for (j = 0 ; j < jaw.size(); j++){
					cout << jaw[j];
					cout << (j==(int)jaw.size()-1?'\n':' ');
				}
				return 0;
			}
		}
	}
	return 0;
}