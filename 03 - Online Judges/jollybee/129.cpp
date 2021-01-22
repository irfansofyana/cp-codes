#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,m;
int i,j,temp;
int A[105];
map<int,int> rank;

bool comp(int a,int b){
	return a>b;
}

int main(){
	OPTIMASI
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> n >> m;
		A[0] = m;
		for (i = 1 ; i <= n ; i++) cin >> A[i];
		sort(A,A+n+1,comp);
		temp = 1;
		i = 0;
		while (i<=n) {
			rank[A[i]] = temp;
			j = i+1;
			int frek=0;
			while (j<=n && A[j]==A[i]){
				frek++;
				j++;
			}
			temp += frek+1;
			i = j;
		}
		cout << "Kasus #" << ++tc << ": " << rank[m] << '\n';
	}
	return 0;
}