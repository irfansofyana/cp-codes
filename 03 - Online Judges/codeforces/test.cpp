#include <bits/stdc++.h>

using namespace std;

int n;
int i,j,k;
int arr[100005];
int mep[100005];

struct paket{
	int b1,b2,b3,jumlah;
};

vector<paket> ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("aku.txt", "r", stdin);
	freopen("uka.txt", "w", stdout);
	cin >> n;
	for (i = 0 ; i < n; i++) {
		cin >> j;
		mep[j+5000]++;
		arr[i] = j;
	}//target : 212
	// -5000 --> 0
	int tot = 0;
	cout << 28379 << '\n';
	for (i = 0; i <= 10000; i++) {
		for (j = 0; j <= 10000; j++) {
			int bil = 1012 - (i + j - 10000) + 5000;
			if (bil < 0 || bil > 10000) continue;  
			if (mep[i] >= 0 && mep[j] >= 0 && mep[bil] >=0) {
				int mini = mep[i];
				mini = min(mini, mep[j]);	
				mini = min(mini, mep[bil]);
				mep[i] -= mini; mep[j] -= mini; mep[bil] -= mini;
				if (mep[i] >= 0 && mep[j] >= 0 && mep[bil] >= 0) {
					for (int z = 0 ; z < mini; z++) {
						cout << i - 5000 << " " << j - 5000 << " " << bil-5000 << '\n';
					}
					tot += mini;
				}
				//tot += mini;
			}
		}
	}
	//cout << tot << '\n';
	return 0;
}