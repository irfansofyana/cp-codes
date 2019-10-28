#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string dummy;
int n,m,i,j,k,l;
char cc;
int arr[10];
int pencet[10];
int nilai[10];

int jarak(char ch){
	if (ch == 's') return 0;
	if (ch == 'p') return 3;
	if (ch == 'g') return 2;
	if (ch == 'd') return 1;
}

int kurangi(int x,int y){
	if (x >= y) return (x-y)%4;
	if (abs(x-y)%4==0) return 0;
	int tmp = abs(x-y);
	tmp = tmp/4;
	return 4*(tmp+1) + x - y;
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> dummy;
	cin >> n;
	while (n--) {
		for (i = 1 ; i <= 3 ; i++) {
			for (j = 1 ; j <= 3; j++) {
				cin >> cc;
				int x = jarak(cc);
				if (i == 1) {
					arr[j] = x;
				}
				else if (i == 2) {
					arr[j+3] = x;
				}
				else if (i == 3) {
					arr[j+6] = x;
				}
			}
		}
		//for (i = 1 ; i <= 9 ; i++) cout << arr[i] << " ";
		//cout << '\n';
		int mini = (int)1e9;
		for (i = 0 ; i <= 3 ; i++) {
			for (j = 0 ; j <= 3 ; j++) {
				for (k = 0; k <= 3; k++) {
					for (l = 0 ; l <= 3; l++) {
						if ((i+j+k+l)%4==arr[2]) {	
							pencet[1] = i;
							pencet[2] = j;
							pencet[3] = k;
							pencet[5] = l;
							pencet[4] = kurangi(arr[1],pencet[1]+pencet[2]);
							pencet[6] = kurangi(arr[3],pencet[2]+pencet[3]);
							pencet[7] = kurangi(arr[4],pencet[1]+pencet[4]+pencet[5]);
							pencet[9] = kurangi(arr[5],pencet[1]+pencet[3]+pencet[5]+pencet[7]);
							pencet[8] = kurangi(arr[7],pencet[4]+pencet[7]);
							if ((pencet[3]+pencet[5]+pencet[6]+pencet[9])%4==arr[6]) {
								if ((pencet[5]+pencet[7]+pencet[8]+pencet[9])%4==arr[8]) {
									if ((pencet[6]+pencet[8]+pencet[9])%4==arr[9]) {
										int tot = 0;
										for (int z = 1 ; z <= 9 ; z++) {
											tot += pencet[z];
										}
										if (tot < mini) {
											mini = tot;
											for (int z = 1 ; z <= 9 ; z++) {
												nilai[z] = pencet[z];
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		for (i = 1 ; i <= 9 ; i++) {
			for (j = 1 ; j <= nilai[i]; j++)
				cout << i;
		}
		cout << '\n';
	}
	return 0;
}