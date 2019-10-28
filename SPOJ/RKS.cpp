#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

struct paket{
	int frek, pertama;
	int bil;
};

int n,i,j,c,x;
int idx;
map<int,int> freq;
map<int,bool> udah;
paket arr[10005];

bool comp(paket a, paket b){
	if (a.frek == b.frek) return a.pertama < b.pertama;
	return a.frek > b.frek;	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> c;
	for (i = 0 ; i < n; i++) {
		cin >> x;
		freq[x]++;
		if (!udah[x]) {
			udah[x] = true;
			arr[idx].pertama = i;
			arr[idx].bil = x;
			idx++;
		}
	} 
	for (i = 0 ; i < idx; i++) {
		arr[i].frek = freq[arr[i].bil];
	}
	sort(arr, arr + idx, comp);
	for (i = 0 ; i < idx; i++) {
		for (j = 0 ; j < arr[i].frek ; j++) {
			cout << arr[i].bil;
			if (i == idx-1) {
				if (j == arr[i].frek - 1) cout << '\n';
				else cout << " ";
			}
			else cout << " ";
		}
	}
	return 0;
}
