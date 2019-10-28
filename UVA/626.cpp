#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;
int n,i,j,k;
int ans;
int A[105][105];
vector<int> temp;
map<pair<pi,pair<pi,pi> >,bool > udah;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		for (i = 0 ; i < n ; i++) 
			for (j = 0 ; j < n ; j++) cin >> A[i][j];
		udah.clear();
		ans = 0;
		for (i = 0 ; i < n ; i++) {
			for (j = 0; j < n ; j++) {
				for (k = 0; k < n ; k++) {
					if (i!=j && j!=k && i!=k) {
						pi t1,t2,t3;
						t1 = make_pair(i,j); t2 = make_pair(j,k); t3 = make_pair(k,i);
						if (A[i][j]==1 && A[j][k]==1 && A[k][i]==1) {
							pair<pi,pi> t4 ;
							t4 = make_pair(t2,t3);
							pair<pi,pair<pi,pi> > t5;
							t5 = make_pair(t1,t4);
							if (!udah[t5]) {
								udah[t5] = true;
								if (i < j && j < k) {
									cout << i+1 << " " << j+1 << " " << k+1 << '\n';
									ans++;
								}
								else if (i > j && j > k) {	
									cout << i+1 << " " << j+1 << " " << k+1 << '\n';
									ans++;
								}
							}
						}
					}
				}
			}
		}
		cout << "total:" << ans << '\n' << '\n';
	}
	return 0;
}