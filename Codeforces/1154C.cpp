#include <bits/stdc++.h>
using namespace std;

int f, r, c;
int ans;
int arr[]={0, 1, 2, 0, 2, 1, 0};

void compute(int s, int d, int t){
	if (s > f || d > r || t > c) return;
	int k = (f - s) / 3;
	if ((r-d)/2 < k) k = (r-d)/2;
	if ((c-t)/2 < k) k = (c-t)/2;
	ans = max(ans, 7*k + s + d + t);
}

int main(){
	scanf("%d %d %d", &f, &r, &c);
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 7; j++){
			int s = 0;
			int d = 0;
			int t = 0;
			for (int k = 0; k < i; k++){
				if (arr[k] == 0) s++;
				else if (arr[k] == 1) d++;
				else t++;
			}
			for (int k = 6; k > j ; k--){
				if (arr[k] == 0) s++;
				else if (arr[k] == 1) d++;
				else t++;
			}
			int ts = 3 - s; 
			int td = 2 - d;
			int tt = 2 - t;
			compute(ts, td, tt);
			// if (ans == 3) {
			// 	cout << i << " " << j << " " << ts << " " << td << " " << tt << '\n';
			// }
		}
	}
	printf("%d\n", ans);
	return 0;
}