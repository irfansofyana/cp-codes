#include <bits/stdc++.h>
using namespace std;

int H, W;
int arr[205][205];
int dist[15][15];

void findTheShortest(){
	for (int k = 0; k < 10; k++)
		for (int i = 0 ; i < 10; i++)
			for (int j = 0 ; j < 10; j++) 
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> H >> W;
	for (int i = 0 ; i < 10; i++)
		for (int j = 0 ; j < 10; j++)
			cin >> dist[i][j];
	findTheShortest();
	int ans = 0;
	for (int i = 0 ; i < H; i++) 
		for (int j = 0 ; j < W; j++) {
			int tmp;
			cin >> tmp;
			if (tmp != -1) ans += dist[tmp][1];
		}
	cout << ans << '\n';
	return 0;
}