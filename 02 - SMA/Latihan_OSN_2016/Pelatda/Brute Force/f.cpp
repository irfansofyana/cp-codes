#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int t,tc;
vector<int> arr[9];
int idx[15];
int dummy;

bool cek() {
	if (arr[idx[0]][1] == arr[idx[1]][3] && arr[idx[0]][2] == arr[idx[3]][0] && arr[idx[1]][1] == arr[idx[2]][3] && arr[idx[1]][2]==arr[idx[4]][0]
	&& arr[idx[2]][2]==arr[idx[5]][0] && arr[idx[3]][1]==arr[idx[4]][3] && arr[idx[3]][2] == arr[idx[6]][0] && arr[idx[4]][1]==arr[idx[5]][3]
	&& arr[idx[4]][2]==arr[idx[7]][0] && arr[idx[5]][2]==arr[idx[8]][0] && arr[idx[6]][1]==arr[idx[7]][3] && arr[idx[7]][1]==arr[idx[8]][3]) return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		f	or (i = 0 ; i < 9 ; i++) {
			arr[i].clear();
		}
		for (i = 0 ; i < 9 ; i++) {
			for (j = 0 ; j < 4 ; j++) {
				cin >> n;
				arr[i].push_back(n);
			}
			idx[i] = i;
		}
		bool ans = false;
		do{
			if (cek()) {
				ans = true;
				break;
			}
		}while(next_permutation(idx,idx+9));
		cout << "Case " << ++tc << ": " << (ans ? "YES" : "NO") << '\n';
	}
	return 0;
}