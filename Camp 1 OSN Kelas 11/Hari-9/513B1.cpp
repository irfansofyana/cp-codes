#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,sum,k;
int A[100],mini;
vector<pair<int,int> > ans;

bool comp(pair<int,int> a,pair<int,int> b){
	if (a.first==b.first) return a.second<b.second;
	else return a.first > b.first;
}
int main(){
	cin.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) A[i] = i+1;
	j = 0;
	do {
		j++;
		sum = 0;
		for (i = 0 ; i < n ; i++) {
			for (k = i ; k < n ; k++) {
				if (k==i) {
					sum += A[i];
					mini = A[i];
				}
				else if (A[k]<mini) {
					sum += A[k];
					mini = A[k];
				}
				else sum+=mini;
			}
		}
		//cout << sum << " " << j << endl;
 		ans.push_back(make_pair(sum,j));
	}while (next_permutation(A,A+n));
//	for (i = 0 ; i < ans.size() ; i++) {
	//	cout << ans[i].first << " " << ans[i].second << endl;
	//}
	sort(ans.begin(),ans.end(),comp);
	j = 0;
	do {
		j++;
		if (j==ans[m-1].second) {
			for (i = 0 ; i < n ; i++){
				cout << A[i];
				if (i==n-1) cout << endl;
				else cout << " ";
			}
		}
	} while (next_permutation(A,A+n));
	return 0;
}