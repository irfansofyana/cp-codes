#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

int n,r,c,k,h,i,j,idx;
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};

int arr[5005][5005];
bool visited[5005][5005];
int ambil[5000005];
vector<int> smt;
vector<pair<int,vector<int> > > ans;
map<int,vector<int> > mep;

bool cek(int x,int y){
	return (x >= 1 && x <= r && y >= 1 && y <= c && !visited[x][y]);
}

int ID(int a,int b){
	return ((((a-1)*c + b)*k + h) % (r*c)) + 1;
}

void jelajah(int x,int y,int indeks){
	visited[x][y] = true;
	ambil[indeks] = arr[x][y];
	if (x == r && y == c){
		if (indeks-0+1 == r+c-1) {
			smt.clear();
			for (int z = 0 ; z <= indeks; z++) {
				smt.pb(ambil[z]);
			}
			mep[idx] = smt;
			sort(smt.begin(),smt.end());
			ans.pb({idx,smt});
			idx++;
		}
	}
	else {
		for (int z = 0 ; z < 4; z++) {
			if (cek(x + dx[z], y + dy[z])) {
				jelajah(x + dx[z], y + dy[z], indeks + 1);
			}
		}
	}	
	visited[x][y] = false;
}

bool comp(pair<int,vector<int> > a, pair<int,vector<int> > b){
	return a.second < b.second;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> r >> c >> k >> h;
	memset(visited , false, sizeof visited);
	for (i = 1 ; i <= r ; i++) {
		for (j = 1 ; j <= c; j++) {
			arr[i][j] = ID(i,j);
		}
	}
	jelajah(1,1,0);
	sort(ans.begin(),ans.end(),comp);
	if ((int)mep[ans[0].fi].size() <= 200) {
		for (i = 0 ; i < mep[ans[0].fi].size(); i++) {
			int dd = 0;
			int bil = mep[ans[0].fi][i];
			while (bil > 0) {
				dd++;
				bil /= 10;
			}
			for (j = 0 ; j < 7-dd; j++) cout << '0';
			cout << mep[ans[0].fi][i] << '\n';
		}
	}
	else {
		for (i = 0 ; i < 100; i++) {
			int dd = 0;
			int bil = mep[ans[0].fi][i];
			while (bil > 0) {
				dd++;
				bil /= 10;
			}
			for (j = 0 ; j < 7-dd; j++) cout << '0';
			cout << mep[ans[0].fi][i] << '\n';
		}
		for (i = (int)mep[ans[0].fi].size() - 100 ; i < mep[ans[0].fi].size(); i++) {
			int dd = 0;
			int bil = mep[ans[0].fi][i];
			while (bil > 0) {
				dd++;
				bil /= 10;
			}
			for (j = 0 ; j < 7-dd; j++) cout << '0';
			cout << mep[ans[0].fi][i] << '\n';
		}
	}
	return 0;
}
