#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
#define mp make_pair
using namespace std;

typedef pair<int,int> ii;
int n,i,j;
int A[1005];
vector<ii> ans;

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	sort(A,A+n);
	i = 0 ;
	while (i < n) {
		j = i+1;
		int frek = 1;
		while (A[j]-A[j-1]==1 && j<n) {
			frek++;
			j++;
		}
		if (frek>=3) {
			ans.push_back(mp(A[i],A[j-1]));
		}
		else if (frek==1) {
			ans.push_back(mp(A[i],A[i]));
		}
		else if (frek==2) {
			ans.push_back(mp(A[i],A[i])); ans.push_back(mp(A[j-1],A[j-1]));
		}
		i = j;
	}
	for (i = 0 ; i < ans.size() ; i++) {
		if (ans[i].first==ans[i].second) cout << ans[i].first;
		else cout << ans[i].first << '-' << ans[i].second ;
		if (i!=ans.size()-1) cout << " ";
		else cout << endl;
	}
	return 0;
}