#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,q,x,y,n,i,j;
int A[100005];
vector<int> antri;
char c;

int main(){
	OPTIMASI
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> q;
		i = 0; j = 0;
		memset(A,0,sizeof A);
		antri.clear();
		cout << "Kasus #" << ++tc << ":" << '\n';
		while (q--) {
			cin >> c;
			if (c=='d') {
				cin >> x;
				antri.push_back(x);
				A[x] = j;
				j++;
			}
			else if (c=='a') {
				while (i<antri.size() && antri[i]==-1) {
					i++;
				}
				cout << antri[i] << '\n';
				i++;
			}
			else if (c=='p') {
				cin >> x >> y;
				if (y==-1) antri[A[x]] = -1;
				else if (A[x]<A[y]) {
					antri[A[x]] = y;
					antri[A[y]] = -1;
				}
				else if (A[x]>A[y]) {
					antri[A[x]] = -1;
				}
			}
		}
	}
	return 0;
}