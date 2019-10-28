#include <bits/stdc++.h>
using namespace std;

int n,d,r,ans;
int i,j;
int pagi[105],malam[105];

bool comp(int a,int b){
	return a>b;
}

int main(){
	cin.tie(0);
	while (cin >> n >> d >> r && n!=0 && d!=0 && r!=0) {
		for (i = 0; i < n ; i++) cin >> pagi[i];
		for (i = 0; i < n ; i++) cin >> malam[i];
		sort(pagi,pagi+n); sort(malam,malam+n,comp);
		ans = 0;
		for (i = 0 ; i < n ; i++) {
			if (pagi[i]+malam[i]>d) ans += (pagi[i]+malam[i]-d)*r;
		}
		cout << ans << endl;
	}	
	return 0;
}