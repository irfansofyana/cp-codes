#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

bool A[55],B[55];
int n,i,j;
vector<int> ans;

int main(){
	OPTIMASI
	cin >> n;
	memset(A,false,sizeof A);
	memset(B,false,sizeof B);
	for (i =0 ;  i < n*n; i++) {
		int x,y;
		cin >> x >> y;
		if (!A[x] && !B[y]) {
			ans.push_back(i+1);
			A[x] = true; B[y] = true;
		}
	}
	for (i = 0 ; i < ans.size(); i++) {
		cout << ans[i] ;
		cout << (i==ans.size()-1?'\n':' ');
	}
	return 0;
}