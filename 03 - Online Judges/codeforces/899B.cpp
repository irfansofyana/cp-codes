#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n;
int arr[30];
int bulan[]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool cek(){
	int i = 0;
	while (i < 12) {
		if (arr[0] != 29 && bulan[i] != arr[0]) i++;
		else if (arr[0] == 29 && bulan[i] != 28) i++;
		else {
			int j = i+1;
			int idx = 1;
			int kab = 0;
			if (arr[0] == 29 && bulan[i] == 28) kab++;
			if (j == 12) j = 0;
			while (idx < n) {
				if (arr[idx] == 28 || arr[idx] == 29) {
					if (bulan[j] != 28) break;
					else if (arr[idx] == 29) kab++; 
				}
				else if (bulan[j] != arr[idx]) break;
				idx++;
				j++;
				if (j == 12) j = 0;
			}
			if (idx == n && kab <= 1) return true;
			else i++;
		}
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) cin >> arr[i];
	cout << (cek() ? "Yes" : "No") << '\n';
	return 0;
}