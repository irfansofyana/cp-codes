#include <bits/stdc++.h>
using namespace std;

int m,a,b;
int tc;

int fpb(int p,int q){
	if (q==0) return p;
	else if (q!=0) return fpb(q,p%q);
}

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> a >> b >> m;
		int c = fpb(a,b);
		if (m%c==0) puts("MUNGKIN");
		else puts("TIDAK MUNGKIN");
	}
	return 0;
}