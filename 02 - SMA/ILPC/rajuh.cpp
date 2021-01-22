#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll arr[]={1,2,3,4,5,6,7,8,9};
ll maks,mini;

int main(){
	maks = -1;
	mini = (ll)1e18;
	do{
		ll bil[3];
		bil[0] = 100*arr[0] + 10 * arr[1] + arr[2];
		bil[1] = 100 * arr[3] + 10 * arr[4] + arr[5];
		bil[2] = 100 * arr[6] + 10 * arr[7] + arr[8];
		maks = max(maks, bil[0]*bil[1]*bil[2]);
		mini = min(mini, bil[0]*bil[1]*bil[2]);
	}while (next_permutation(arr, arr + 9));
	cout << maks - mini << '\n';
}