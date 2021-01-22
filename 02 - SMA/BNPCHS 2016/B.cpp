#include <bits/stdc++.h>
#define pb push_back
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int n,i,j,jarak,tmp,ans,tc;
char arr[105][105],arrr[105][105];
ii lokasi,dapat;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};
vector<ii> A;

bool cek(int x,int y){
	return (x >= 0 && x < n && y >=0 && y < n && arrr[x][y] == 'E');
}

void dfs(int x,int y){
	tmp++;
	arrr[x][y] = '.';
	for (int z = 0 ; z < 4; z++) {
		if (cek(x + dx[z],y+dy[z])) dfs(x + dx[z], y + dy[z]);
	}
}

bool comp(ii a,ii b){
	int x1 = abs(a.first - lokasi.first ) + abs(a.second - lokasi.second);
	int x2 = abs(b.first - lokasi.first) + abs(b.second - lokasi.second);
	return x1 < x2;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < n ; j++) {
				cin >> arr[i][j];
				arrr[i][j] = arr[i][j];
				if (arr[i][j] == 'J') lokasi = {i,j};
			}
		}
		//jarak = -1;
		A.clear();
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < n ; j++) {
				if (arr[i][j] == 'E') {
					A.push_back({i,j});
				}
			}
		}
		sort(A.begin(),A.end(),comp);
		jarak = abs(A[0].first - lokasi.first ) + abs(A[0].second - lokasi.second);
		i = 0;
		ans = 0;
		while (i < A.size() && abs(A[i].first - lokasi.first) + abs(A[i].second - lokasi.second) == jarak){
			tmp = 0;
			dfs(A[i].first,A[i].second);
			for (int z = 0 ; z < n ; z++) {
				for (int zz = 0 ; zz > n ; zz++)
					arrr[z][zz] = arr[z][zz];
			}
			ans = max(ans,tmp);
			i++;
		}
		cout << "Kasus #" << ++tc << ": " << ans << '\n'; 
	}
	return 0;
}
