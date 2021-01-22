#include <bits/stdc++.h>
using namespace std;

int n,i,j,k,ans;
int x[55],y[55];
int px,py;
bool a,b,c,d;
int main(){
	cin >> n;
	for (i=0;i<n;i++) cin>>x[i];
	for (i=0;i<n;i++) cin>>y[i];
	for (i=-102;i<=102;i++){
		for (j=-102;j<=102;j++){
			px = i;
			py = j;
			a = false; b = false; c = false; d= false;
			for (int z=0;z<n;z++){
				if (x[z]==i && y[z]<j) a = true;
				else if (x[z]==i && y[z]>j) b = true;
				if (a && b) break;
			}
			for (int z=0;z<n;z++) {
				if (y[z]==j && x[z]<i) c = true;
				else if (y[z]==j && x[z]>i) d = true;
				if (c && d) break;
			}
			if (a && b && c && d) ans++;
		}
	}
	cout << ans << endl;
}
