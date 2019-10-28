#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int memo[105][105];
int boy[105],girl[105];

int cari(int i,int j){
	if (i==n || j==m) return 0;
	if (abs(boy[i]-girl[j])<=1) return cari(i+1,j+1)+1;
	if (memo[i][j]==-1) {
		memo[i][j] = max(cari(i,j+1),cari(i+1,j));
	}
	return memo[i][j];
}

int main(){
	cin >> n;
	for (i=0;i<n;i++) cin >>boy[i];
	cin >> m;
	for (i=0;i<m;i++) cin >> girl[i];
	sort(boy,boy+n);
	sort(girl,girl+m);
	memset(memo,-1,sizeof memo);
	cout << cari(0,0) << endl;
}
