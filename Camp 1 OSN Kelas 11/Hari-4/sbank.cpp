#include <bits/stdc++.h>
using namespace std;
struct paket{
	int nomor;
	string kal;
};
int t,n,i,j;
map<string,int> mep;
string a[100005][7],x;
paket temp[100005];

bool comp(paket a,paket b){
	return a.kal<b.kal;
}
int main(){
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) {
			temp[i].kal = "";
			temp[i].nomor = i;
			for (j = 0 ; j < 6 ; j++) {
				cin >> x;
				a[i][j] = x;
				temp[i].kal = temp[i].kal+x;
			}
			mep[temp[i].kal]++;
		}
		cout << endl;
		sort(temp,temp+n,comp);
		for (i = 0 ; i < 6 ; i++) {
			cout << a[temp[0].nomor][i] << " ";
		}
		cout << mep[temp[0].kal] << endl;
		i = 1;
		while (i<n) {
			if (temp[i].kal==temp[i-1].kal) i++;
			else {
				for (j = 0 ; j < 6 ; j++) {
					cout << a[temp[i].nomor][j] << " ";
				}
				cout << mep[temp[i].kal] << endl;
				i++;
			}
		}
		cout << endl;
		for (i = 0 ; i < n ; i ++) 
			mep[temp[i].kal] = 0;
	}
	return 0;
}