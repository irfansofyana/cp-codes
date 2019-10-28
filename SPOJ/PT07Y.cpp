#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, m;
int parent[10005];

int cari(int x){
	return (x == parent[x] ? x : parent[x] = cari(parent[x]));
}

void gabung(int x,int y){
	int a = cari(x);
	int b = cari(y);
	parent[a] = b;
}

bool vis[10005];

int main(){
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n ; i++) parent[i] = i;
	for (int i = 0 ; i < m ; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		gabung(x, y);
	}
	if (m != n-1) printf("NO\n");
	else {
		int t = 0;
		for (int i = 1; i <= n ; i++) {
			int cok = cari(parent[i]);
			if (!vis[cok]) {
				vis[cok] = true;
				t++;
			}
			if (t > 1) {
				printf("NO\n");
				return 0;
			}
		}
		printf("YES\n");
	}
	return 0;
}