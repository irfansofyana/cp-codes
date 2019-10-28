#include <bits/stdc++.h>
using namespace std;

struct paket{
	int a,b,c;
};
int n,m,i,j;
int arr[10];
paket syarat[25];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> m){
		if (n==0 && m==0) return 0;
		for (i = 0 ; i < n ; i++) arr[i] = i;
		for (i = 0 ; i < m ; i++) {
			int x,y,z;
			cin >> x >> y >> z;
			syarat[i].a = x; syarat[i].b = y; syarat[i].c = z;
		}
		int ans = 0;
		do{
			int pos[10];
			for (i = 0 ; i < n ; i++)
				pos[arr[i]] = i;
			bool _can = true;
			for (i = 0 ; i < m ; i++){
				if (syarat[i].c < 0) {	//at least 
					int xx = syarat[i].c*(-1);
					if (abs(pos[syarat[i].a]-pos[syarat[i].b]) < xx) {
						_can = false;
						break;
					} 
				}
				else if (syarat[i].c > 0) {
					int xx = syarat[i].c;
					if (abs(pos[syarat[i].a]-pos[syarat[i].b]) > xx) {
						_can = false;
						break;
					}
				}
			}
			if (_can) ans++;
		}while (next_permutation(arr,arr+n));
		cout << ans << '\n';
	}
	return 0;
}