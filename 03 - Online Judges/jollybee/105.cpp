#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

struct paket{
	int x,y;
};

int t,n,m,i,j;
paket A[100005];

bool comp(paket a,paket b){
	if (a.y==b.y) return a.x < b.x;
	return a.y>b.y;
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0; i < n ; i++) {
			int a,b;
			cin >> a >> b;
			A[i].x = a;
			A[i].y = b;
		}
		sort(A,A+n,comp);
		int ans = -100000;
		int temp = 0;
		for (i = 0 ; i < n ; i++) {
			temp += A[i].x;
			ans = max(ans,temp+A[i].y);
		}
		cout << ans << '\n';
	}
	return 0;
}