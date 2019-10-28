#include <bits/stdc++.h>
using namespace std;

int n,i,j,k;
bool can[105][105];
bool visited[105][105];
int start;
vector<int> arr[105];

bool bisa(int awal,int akhir){
	visited[awal][akhir] = true;
	if (can[awal][akhir]) return true;
	else {
		for (int z = 0 ; z < arr[awal].size(); z++){
			if (!visited[arr[awal][z]][akhir]){
				if (bisa(arr[awal][z],akhir)) return true;
			}
		}
		return false;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		if (n == 0) return 0;
		memset(can,false,sizeof can);
		for (i = 0 ; i <= 100; i++) arr[i].clear();
		while (cin >> start) {
			if (start == 0) break;
			while (cin >> i) {
				if (i == 0) break;
				else {
					can[start][i] = true;
					arr[start].push_back(i);
				}
			}
		}
		cin >> k;
		while (k--) {
			memset(visited,false,sizeof visited);
			cin >> start;
			vector<int> ans;
			for (i = 1 ; i <= n ; i++) {
				if (!bisa(start,i)) ans.push_back(i);
			}
			cout << ans.size() ;
			for (i = 0 ; i < ans.size(); i++){
				cout << " " << ans[i];
			}
			cout << '\n';
		}
	}
	return 0;
}