#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int pos;
pair<int,int> A[105];

int main(){
	cin.tie(0);
	cin >> n >> pos;
	for (i=0;i<n;i++) {
		int x,y;
		cin >> x >> y;
		if (!((x<=pos && pos<=y) || (x>=pos && pos>=y))) {
			A[j] = make_pair(min(x,y),max(x,y));
			j++;
		}
	}
	return 0;
}
