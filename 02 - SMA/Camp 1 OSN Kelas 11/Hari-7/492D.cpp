#include <bits/stdc++.h>
using namespace std;

int n,smt;
int idx,k,z,zz;
int a[100005],ans[100005];
double i,j,x,y;
bool c;

int main(){
	cin.tie(0);
	cin >> n >> x >> y;
	for (z = 0 ;  z < n ; z++) {
		cin >> a[z];
	}
	i = 1/x; j = 1/y;
	idx = 1;
	while (i!=j) {
		if (i<j) {
			ans[idx] = 1;
			i += 1/x;
		}
		else if (i>j) {
			ans[idx] = 2;
			j += 1/y;
		}
		idx++;
	}
	ans[idx] = 3; idx++; ans[idx] = 3;
	for (z = 0 ; z < n ; z++) {	
		if (a[z]%idx==0) smt = idx;
		else smt = a[z]%idx;
		if (ans[smt]==1) cout << "Vanya";
		else if (ans[smt]==2) cout << "Vova" ;
		else if (ans[smt]==3) cout << "Both" ;
		cout << endl;
	}
	return 0;
}