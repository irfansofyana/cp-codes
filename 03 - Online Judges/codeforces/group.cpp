#include <bits/stdc++.h>
using namespace std;

int main(){
	int m,i,x,y;
	int c[1000];
	int kurang=0,jawaban=0,jumlah=0;
	
	cin>>m;
	for (i=0;i<m;i++){
		cin>>c[i];
		jumlah+=c[i];
	}
	cin>>x>>y;
	kurang=c[0];
	for (i=1;i<m;i++)
		{
			if (((kurang>=x) && (kurang<=y)) && ((jumlah-kurang>=x) && (jumlah-kurang<=y))){
				jawaban=i+1;
				break;
			}
			else
				kurang=kurang+c[i];
		}
	cout<<jawaban<<endl;
}