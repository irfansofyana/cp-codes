#include <bits/stdc++.h>
using namespace std;

long long butuh,cost,costI;
int x,idx,n,m,y;
vector<int> data[3005];
int sisa[3005],voter[3005];

int main(){
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		cin >> x >> y;
		data[x].push_back(y);
	}
	for(int i = 1;i<=m;i++){
		voter[i] = data[i].size();
	}
	for(int i = 1;i<=m;i++){
		sort(data[i].begin(),data[i].end());
	}
	cost = 4000000000000;
	for(int i = voter[1];i<=n;i++){
		butuh = i - voter[1];
		costI = 0;
		idx = 0;
		for(int j = 2;j<=m;j++){
			for(int k = 0;k<voter[j];k++){
				if(k <= voter[j]-i){
					costI += data[j][k];
					butuh--;
				} else {
					sisa[idx] = data[j][k];
					idx++;
				}
			}
		}
		sort(sisa,sisa+idx);
		int j = 0;
		while((butuh > 0) && (j < idx)){
			costI += sisa[j];
			j++;
			butuh--;
		}
		if((butuh == 0) && (costI < cost)){
			cost = costI;
		}
	}
	cout << cost << endl;
}