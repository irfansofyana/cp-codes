#include <bits/stdc++.h>
using namespace std;
int main(){
	int r,c,b,e,d,p;
	int A[100][100];
	int i,j,jawaban=0;
	bool ditemukan=false;
	
	cin>>r>>c;
	for (i=0;i<r;i++){
		for (j=0;j<c;j++){
			cin>>A[i][j];
		}
	}
	i=0;
	while (i<r){
		j=0;
		while (j<c){
			if (A[i][j]=='S'){
				ditemukan=true;
				j++;
			}
			if ((A[i][j]=='.') && (ditemukan)){
				p=0;
				for (b=i;b<r;b++){
					if (A[b][j]=='S')
						{
							j++;
							break;
						}
					else
					p++;
				}
				if (p==)
			}
		}
	}
}
