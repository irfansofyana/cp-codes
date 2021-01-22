#include <bits/stdc++.h>
using namespace std;

string input[3];
int i,j;
char huruf[3]={'A','B','C'};

int posisi(char x){
	for (int z=0;z<3;z++)
		if (huruf[z]==x) return z;
}

int main(){
	cin.tie(0);
	for (i=0;i<3;i++)
		cin >> input[i];
	do {
		for (i=0;i<3;i++) {
			if (input[i][1]=='>') {
				if (posisi(input[i][0])<posisi(input[i][2])) break;
			}
			else {
				if (posisi(input[i][0])>posisi(input[i][2])) break;
			}
		}
		if (i==3) {
			for (int z=0;z<3;z++) 
				cout<<huruf[z];
			cout << endl;
			return 0;
		}
	} while (next_permutation(huruf,huruf+3));
	puts("Impossible");
	return 0;
}
