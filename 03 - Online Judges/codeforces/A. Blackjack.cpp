#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,i,j;
	int jumlah;
	int jawaban;
	
	cin>>n;
	jumlah=n-10;
	if (jumlah<=0) cout<<0<<endl;
	else{
		if (jumlah>11) cout<<0<<endl;
		else{ if (jumlah<=9 || jumlah==11) cout<<4<<endl;
			else if (jumlah==10) cout<<15<<endl;
		}
	}
	return 0;
}
