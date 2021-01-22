#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;
struct paket{
	int speed,ram,hdd;
	int harga;
};

int n,i,j;
int a,b,c,d;
int cost,ans;
paket A[105];
bool bisa[105];

int main(){
	cin.tie(0);
	cin >> n;
	for (i=0;i<n;i++) {
		cin >> a >> b >> c >> d;
		A[i].speed = a; A[i].ram = b; A[i].hdd = c; A[i].harga = d;
	}
	memset(bisa,true,sizeof bisa);
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			if (i!=j) {
				if (A[i].speed<A[j].speed && A[i].ram<A[j].ram && A[i].hdd<A[j].hdd) {
					bisa[i] = false;
					break;
				}
			}
		}
	}
	cost = INF;
	for (i=0;i<n;i++) {
		if (bisa[i]) {
			if (A[i].harga<cost) {
				ans = i+1;
				cost = A[i].harga;
			}
		} 
	}
	cout << ans << endl;
}
