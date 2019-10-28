#include <bits/stdc++.h>
using namespace std;

struct paket{
	string nama;
	int vote;
};

paket arr[3];

int n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	arr[0].nama = "Abimanyu Nur Islami"; arr[0].vote = 0;
	arr[1].nama = "Muhammad Dhawinanda Hanif Azhar"; arr[1].vote = 0;
	arr[2].nama = "Muhammad Hassya Santoso"; arr[2].vote = 0;
	while (cin >> n) {
		n--;
		arr[n].vote++;
	}
	int maks = 0,pilih;
	for (int i = 0 ; i < 3 ; i++) {
		cout << arr[i].nama << " " << arr[i].vote << " suara\n";
		if (arr[i].vote > maks) {
			maks = arr[i].vote;
			pilih = i;
		}
	}
	return 0;
}
