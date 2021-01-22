#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,i,j;
int t;
int dist[100005];
const int INF  = (int)1e9;

bool cek_prima(int x){
	if (x <= 1) return false;
	if (x == 2) return true;
	for (int z = 2 ; z <= (int)sqrt(x); z++) {
		if (x%z == 0) return false;
	}
	return true;
}
int pangkat[6];

void isi(){
	pangkat[0] = 1;
	for (i = 1; i <= 4; i++) {
		pangkat[i] = 10*pangkat[i-1];
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	isi();
	while (t--) {
		int a,b;
		cin >> a >> b;
		queue<int> antrian;
		for (i = 1000; i <= 9999; i++) {
			dist[i] = INF;
		}
		antrian.push(a);
		dist[a] = 0;
		while (!antrian.empty()){
			int now = antrian.front();
			antrian.pop();
			int tmp = now;
			int a[5];
			a[4] = tmp%10; tmp/=10; a[3] = tmp%10; tmp/=10; a[2] = tmp%10; tmp /= 10; a[1] = tmp%10; a[0] = 0;
			int nexx = 0;
			for (i = 1 ; i <= 4; i++) {
				int mulai = 0;
				if (i == 1) mulai = 1;
				else mulai = 0;
				
				for (j = mulai; j <= 9; j++) {
					//ganti digit ke-i pake j
					nexx = 0;
					for (int z = 1; z <= i-1; z++) {
						nexx += a[z]*pangkat[4-z];
					}

					nexx += j*pangkat[4-i];

					for (int z = i+1; z <= 4; z++) {
						nexx += a[z]*pangkat[4-z];
					}

					//cout << nexx << '\n';
					if (cek_prima(nexx) && dist[now] + 1 < dist[nexx]) {
						//cout << nexx << '\n';
						dist[nexx] = dist[now] + 1;
						antrian.push(nexx);
					}
				}

			}
		}
		if (dist[b] == INF) cout << "Impossible\n";
		else cout << dist[b] << '\n';
 	}
	return 0;
}