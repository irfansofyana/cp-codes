#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

int n,i,j;
int temp;
int ans[1000005];


int main(){
	OPTIMASI
	memset(ans,-1,sizeof ans);
	for (i = 1 ; i <= 1000 ; i++) {
		temp = 0;
		for (j = 1 ; j <= (int)sqrt(i); j++) {
			if (i%j==0) {
				int k = (i/j);
				if (j!=k) temp += j+k;
				else temp += j;
			}
		}
		ans[temp] = i;
 	}
	int tc = 0;
	while (cin >> n && n>0) {
		cout << "Case " << ++tc << ": " << ans[n] << '\n'; 
	}
	return 0;
}