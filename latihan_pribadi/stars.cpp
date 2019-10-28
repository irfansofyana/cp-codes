#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
#define INF 100000000
using namespace std;
struct paket{
	int x,y;
	double gradien;
};

int t,tc,n,i,j,temp1,temp2;
int tx,ty,ax,ay,ans;
paket A[1005];

bool comp(paket a,paket b){
	if (a.gradien==b.gradien) {
		if (a.x==b.x) return a.y < b.y;
		return a.x<b.x;
	}
	return a.gradien < b.gradien;
}

bool lebih(int p,int q){
	if (p>ax) return true;
	else if (p==ax && q>ay) return true;
	return false;
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> ax >> ay;
		cin >> n;
		for (i = 0 ; i < n ; i++) {
			cin >> tx >> ty;
			A[i].x = tx; A[i].y = ty;
			if (tx==ax) A[i].gradien = double(INF);
			else A[i].gradien = double(ty-ay)/double(tx-ax);
		}
		sort(A,A+n,comp);
		//for (i = 0 ; i < n ; i++) {
			//cout << A[i].gradien << " " << A[i].x << " " << A[i].y << endl;
		//}
		i = 0; ans = 0;
		while (i < n ) {
			j = i+1; temp1 = temp2 = 0;
			if (lebih(A[i].x,A[i].y)) temp1++;
			else temp2++;
			while (A[j].gradien==A[i].gradien && j<n) {
				if (lebih(A[j].x,A[j].y)) temp1++;
				else temp2++;
				j++;
			}
			//cout << temp1 << " " << temp2 << endl;
			if (temp1>0 && temp2>0) ans += 2;
			else if (temp1>0 || temp2>0)ans ++;
			i = j;
		}
		cout << "Case #" << ++tc << ": " << ans << '\n';
	}
	return 0;
}