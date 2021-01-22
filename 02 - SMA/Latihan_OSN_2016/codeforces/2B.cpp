#include <bits/stdc++.h>
#define mp make_pair
using namespace std;


pair<int,int> arr[1005][1005];
char pilih[1005][1005];
int n,m,i,j;
int x,tmp;
pair<int,int> banding;

int lima(int x){
	int ret = 0;
	while (x%5 == 0 && x > 0) {
		ret++;
		x /= 5;
	}
	return ret;
}

int dua(int x){
	int ret = 0;
	while (x%2 == 0 && x > 0) {
		ret++;
		x /= 2;
	}
	return ret;
}

string ans;

bool cek(int x,int y){
	return (x >= 0 && x < n && y >= 0 && y < n);
}

bool comp(pair<int,int> a,pair<int,int> b){
	int a1,a2,b1,b2;
	a1 = banding.first + a.first;	//dua
	a2 = banding.second + a.second; // lima
	b1 = banding.first + b.first;
	b2 = banding.second + b.second;
	return (min(a1,a2) < min(b1,b2));
}

bool comps(pair<int,int> a,pair<int,int> b){
	int a1,a2;
	int b1,b2;
	a1 = a.first; a2 = a.second;
	b1 = b.first; b2 = b.second;
	return (min(a1,a2) < min(b1,b2));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++)
		for (j = 0 ; j < n ; j++) {
			cin >> x;
			arr[i][j] = mp(dua(x),lima(x));
		}
	for (i = n-2 ; i >= 0; i--){ 
		arr[n-1][i] = mp(arr[n-1][i].first + arr[n-1][i+1].first,arr[n-1][i].second + arr[n-1][i+1].second);
		pilih[n-1][i] = 'R';
	}
	for (i = n-2 ; i >= 0 ; i--){
		arr[i][n-1] = mp(arr[i][n-1].first + arr[i+1][n-1].first, arr[i][n-1].second + arr[i+1][n-1].second);
		pilih[i][n-1] = 'D';
	}
	for (i = n-2 ; i >= 0 ; i--) {
		for (j = n-2 ; j >= 0 ; j--) {
			vector<pair<int,int> > smt;
			int xx = -1;
			if (cek(i,j+1)){ smt.push_back(arr[i][j+1]); x++;}
			if (cek(i+1,j)){ smt.push_back(arr[i+1][j]); x++;}
			banding = arr[i][j];
			sort(smt.begin(),smt.end(),comp);
			arr[i][j] = mp(arr[i][j].first + smt[0].first,arr[i][j].second + smt[0].second);	
			if (smt.size()==2){
				if (smt[0] == arr[i][j+1]) pilih[i][j] = 'R';
				else pilih[i][j] = 'D';
			}
			else {
				if (x == 0) pilih[i][j] = 'R';
				else pilih[i][j] = 'D';
			}
		}
	}
	/*for (i = 0 ; i < n ; i++){
		for (j = 0 ; j < n ; j++) {
			cout << arr[i][j].first << " " << arr[i][j].second << "  ";
		}
		cout << endl;
	}*/
	i = 0; j = 0;
	while (i!=n-1 || j!=n-1) {
		ans = ans + pilih[i][j];
		if (pilih[i][j] == 'R') j++;
		else i++;
	}
	cout << min(arr[0][0].first,arr[0][0].second) << '\n';
	cout << ans << '\n';
	return 0;
}	