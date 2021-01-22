#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,i,j,k;
map<string,int> dist;
map<string,bool> udah;
string s,tmp,smt;
//int arr[10];
queue<string> antrian;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	s = "";
	for (i = 0; i < n ; i++) {
		cin >> j;
		s = s + char(j + '0');
	}
	cin >> k;
	udah[s] = true;
	dist[s] = 0; antrian.push(s);
	while (!antrian.empty()){
		smt = antrian.front();
		antrian.pop();
		for (i = 0 ; i + k -1 < n; i++) {
			tmp = "";
			for (j = 0 ; j < i ; j++) tmp = tmp + smt[j];
			for (j = i + k - 1; j >= i ; j--) tmp = tmp + smt[j];
			for (j = i + k ; j < n ; j++) tmp = tmp + smt[j];
			if (!udah[tmp]) {
				udah[tmp] = true;
				dist[tmp] = dist[smt] + 1;
				antrian.push(tmp);
			}
			else if (dist[smt] + 1 < dist[tmp]) {
				dist[tmp] = dist[smt] + 1;
				antrian.push(tmp);
			}
		}
	}
	tmp = "";
	for (i =  1 ; i <= n ; i++) tmp = tmp + char(i + '0');
	//cout << dist[tmp] << '\n';
	//cout << tmp << '\n';
	if (!udah[tmp]) cout << -1 << '\n';
	else cout << dist[tmp] << '\n';
	return 0;
}