#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m,i,j;
pair<int,int> A;
int x,y;

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> x >> y;
		A[i] = make_pair(x,y);
	}
	return 0;
}