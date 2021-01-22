#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;

int n,m,k;
pi row[5005],kolom[5005];
int i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m >> k;
	for (i = 0 ; i < n ; i++)
		row[i] = make_pair(0,-1);
	for (i = 0 ; i < m ; i++)
		kolom[i] = make_pair(0,-1);
	
	for (i = 0 ; i < k ; i++) {
		int x,temp,warna;
		cin >> x >> temp >> warna;
		temp--;
		if (x==1) {
			row[temp] = make_pair(warna,i);
		}
		else kolom[temp] = make_pair(warna,i);
	}
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++){
			if (row[i].second==-1 && kolom[j].second==-1) {
				cout << 0 << " ";
			}
			else if (row[i].second > kolom[j].second) {
				cout << row[i].first << " ";
			}
			else cout << kolom[j].first << " ";
		}
		cout << '\n';
	}
	return 0;
}