#include <bits/stdc++.h>
using namespace std;
int n,m,i,j;
int dx[]={-1,1,0,0,1,-1,-1,1};
int dy[]={0,0,1,-1,1,1,-1,-1};
int peta[4][4];
char jawaban[4][4];
int main(){
	cin.tie(0);
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			cin>>peta[i][j];
		}
	} for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			jawaban[i][j]='1';
		}
	}
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			for (int k=1;k<=peta[i][j];k++){
				if (jawaban[i][j]=='1') jawaban[i][j]='0';
				else if (jawaban[i][j]=='0') jawaban[i][j]='1';
				for (int l=0;l<4;l++){
					if ((i+dx[l]>=0 && i+dy[l]<3) && (j+dy[l]>=0 && j+dy[l]<3)){
						if (jawaban[i+dx[l]][j+dy[l]]=='1') jawaban[i+dx[l]][j+dy[l]]='0';
						else if (jawaban[i+dx[l]][j+dy[l]]=='0') jawaban[i+dx[l]][j+dy[l]]='1';
					}
				}
			}
		}
	}
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			cout<<jawaban[i][j];
		}
		cout<<endl;
	}
}
