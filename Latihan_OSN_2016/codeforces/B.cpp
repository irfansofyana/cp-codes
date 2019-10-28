#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k,i,j;
ll arr[100005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (i = 0 ; i < n ; i++)
		cin >> arr[i];
	for (i = 1 ; (i*(i+1))/2 < k; i++);
	//cout << i << '\n';	
	if ((i*(i+1))-2*k==0) cout << arr[i-1] << '\n';
	else {
		i--;
		j = k-((i*(i+1))/2);
		cout << arr[j-1] << '\n';
	}
	return 0;
}