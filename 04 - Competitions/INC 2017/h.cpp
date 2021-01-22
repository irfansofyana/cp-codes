#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef pair<int,int> ii;

vector<ii> arr;
bool udah[30][30];
int tot;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	memset(udah, false, sizeof udah);
	for (int i = 0 ; i < 25; i++) {
		for (int j = i+1; j < 25; j++) {
			if (!udah[i][j]) {
				udah[i][j] = true;
				udah[j][i] = true;
				for (int k = 0; k < 25; k++) {
					if (i != k && j != k) {
						if (!udah[i][k] && !udah[k][i] && !udah[j][k] && !udah[k][j]){
							udah[i][k] = true;
							udah[k][i] = true;
							udah[j][k] = true;
							udah[k][j] = true;
							tot++;
						}
					}
				}
			}
		}
	}
	cout << tot << '\n';
	return 0;
}