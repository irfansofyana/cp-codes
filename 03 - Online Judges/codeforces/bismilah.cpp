#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,tadi,maks=0,tinggi,sebelumnya;
	bool naik=true;
	cin>>n;
	sebelumnya=n;
	while (cin){
		tadi=sebelumnya;
		while (naik&&cin){
			sebelumnya=n;
			cin>>n;
			if (n<sebelumnya){
					naik=false;
					tinggi=sebelumnya-tadi;
					if (tinggi>maks)
						maks=tinggi;
			}
		}
		if (cin){
			tadi=sebelumnya;
			while (!naik&&cin){
				sebelumnya=n;
				cin>>n;
				if (n>sebelumnya)
					{
						naik=true;
						tinggi=tadi-sebelumnya;
						if (tinggi>maks)
							maks=tinggi;
					}
			}
		}
	}
	tinggi=abs(sebelumnya-tadi);
	if (tinggi>maks)
		maks=tinggi;
	cout<<maks<<endl;
	return 0;
}