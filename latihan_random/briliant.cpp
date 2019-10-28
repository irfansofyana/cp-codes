#include <bits/stdc++.h>
using namespace std;

int used[10],x[10];
int i,j,temp;
int c,ans;
int main(){
	for (i=10000;i<=99999;i++){
		c = 0;
		temp = i;
		memset(used,0,sizeof used);
		while (temp>0) {
			used[temp%10] = 1;
			temp/=10;
		}
		for (int z=0;z<10;z++) if (used[z]>1) c++;
		if (c==0) {
			memset(used,0,sizeof used);
			temp = 2*i;
			while (temp>0) {
				used[temp%10] = 1;
				temp/=10;
			}
			for (int z=0;z<10;z++) if (used[z]>1) c++;
			if (c==0) {
				if (i%10000==(2*i)%100000 && i%10==(2*i)%1000) {
					/*x[0] = i%100000;
					x[1] = i%1000;
					x[2] = i%100;
					x[3] = (2*i)%10000;
					x[4] = (2*i)%100;
					x[5] = (2*i)%10;
					sort(x,x+6);
					for (int z=0;z<5;z++){
						if (x[z]==x[z+1]) c++;
					}
					if (c==0) */ans++;
					cout<<i<<endl;
				}
			}
		}	
	}		
	cout << ans << endl;
}
