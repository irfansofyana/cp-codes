#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

struct paket{
	int t,b;
};

int tes,tc,n,i,j;
paket A[1010];

bool comp(paket a,paket bb){
	if (a.t==bb.t) return a.b<bb.b;
	return a.t>bb.t;
}
int main(){
	OPTIMASI
	cin >> tes;
	while (tes--) {
		cin >> n;
		for (i = 0 ; i < n ; i++){
			int x,y;
			cin >> x >> y;
			A[i].t = x; A[i].b = y;
		}
		sort(A,A+n,comp);
		for (i = 0 ; i < n ; i++) {
			cout << A[i].t << " " << A[i].b << '\n';
 		}
		cout << '\n';
	}
	return 0;
}