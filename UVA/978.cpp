#include <bits/stdc++.h>
#define OPTIMASI
using namespace std;

priority_queue<int> arrg,arrb;
int g,b,i,j,n;
int sumb,sumg;
int tmpg[100005],tmpb[100005];

int mini(int a,int b,int c){
	return min(min(a,b),c);
}

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> g >> b;
		sumb = 0; sumg = 0;
		for (i = 0 ; i < g ; i++) {
			cin >> j;
			sumg += j;
			arrg.push(j);
		}
		for (i = 0 ; i < b ; i++) {
			cin >> j;
			sumb += j;
			arrb.push(j);
		}
		while (!arrb.empty() && !arrg.empty()){
			int x,y;
			int sz = mini(n,g,b);
			int idg = 0,idb = 0;
			for (i = 0 ; i < sz; i++){
				x = arrg.top();
				y = arrb.top();
				arrg.pop(); arrb.pop();
				g--; b--;
				if (x > y) {
					tmpg[idg++] = x-y;
					g++;
				}
				else if (x < y) {
					tmpb[idb++] = y-x;
					b++;
				}
			}
			for (i = 0; i < idg; i++)
				arrg.push(tmpg[i]);
			for (i = 0; i < idb; i++)
				arrb.push(tmpb[i]);
		}
		if (arrb.empty() && arrg.empty()){
			cout << "green and blue died\n";
		}
		else if (arrb.empty()){
			cout << "green wins\n";
			while (!arrg.empty()){
				cout << arrg.top() << '\n';
				arrg.pop();
			}
		}
		else if (arrg.empty()){
			cout << "blue wins\n";
			while (!arrb.empty()){
				cout << arrb.top() << '\n';
				arrb.pop();
			}
		}
		if (t > 0) cout << '\n';
	}
	return 0;
}