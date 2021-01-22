#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int t;
long long ans[2000005];

void isi(){
	int temp,frek;
	temp = 2; frek=0;
	for (i=1;i<=2000000;i++){
		if (frek!=temp) {
			ans[i] = temp;
			frek++;
		}
		else {
			frek = 1;
			temp++;
			ans[i] = temp;
		}
	}
}
int main(){
	cin >> t;
	isi();
	while (t--){
		cin >> n;
		cout<< ans[n] << endl;
	}
}