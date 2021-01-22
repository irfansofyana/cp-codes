#include <bits/stdc++.h>
using namespace std;

int t,a,b,i,j;
int d;
bool bil[100005];
vector<int> arr;
long long ans[100005][10];

void generate(){
	memset(bil,true,sizeof bil);
	for (i = 2 ; i * i <= 100000; i++) {
		j = 1;
		while (i * i * j <= 100000) {
			bil[i * i * j] = false;
			j++;
		}
	}
	for (i = 1 ; i <= 100000; i++) {
		if (bil[i]) arr.push_back(i);
	}
	for (i = 0 ; i < arr.size(); i++) {
		j = arr[i];
		bool udah[10];
		memset(udah,false,sizeof udah);
		while (j > 0) {
			udah[j%10] = true;
			j /= 10;
		}
		if (i == 0) {
			for (j = 0 ; j < 10 ; j++) ans[i][j] = (udah[j] ? 1 : 0); 
		}
		else {
			for (j = 0 ; j < 10 ; j++)
				ans[i][j] += ans[i-1][j] + (udah[j] ? 1 : 0);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
//	for (i = 0 ; i < 10 ; i++) cout << arr[i] << " ";
//	cout << '\n';
	cin >> t;
	while (t--) {
		cin >> a >> b >> d;
		i = lower_bound(arr.begin(),arr.end(),a) - arr.begin();
		j = upper_bound(arr.begin(),arr.end(),b) - arr.begin();
		j--;
//		cout << i << " " << j << '\n';
		cout << ans[j][d] - (i-1 == -1 ? 0 : ans[i-1][d]) << '\n';
	}
	return 0;
}
