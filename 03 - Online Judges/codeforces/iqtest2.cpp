#include <bits/stdc++.h>
using namespace std;
int main(){
	int atas,bawah,i,j;
	char A[4][4];
	int frekp=0,frekt=0;
	bool ada=false;
	
	for (i=0;i<4;i++){
		for (j=0;j<4;j++)
			cin>>A[i][j];
	}
	i=1;
	atas=0;
	bawah=1;
	while ((i<=9) && (!ada)){
		j=1;
		while (j<=2){
			if (A[atas][bawah-1]=='#'){
				frekp++;}
			else{
				frekt++;
			}
			if (A[atas+1][bawah-1]=='#')
				frekp++;
			else
				frekt++;
			j++;
			bawah++;
		}
		if (((frekp==4) || (frekp==3)) || ((frekt==4) || (frekt==3))){
			ada=true;
			break;
		}
		i++;
		if (i%3==1)
			atas++;
		bawah=i%3;
		if (bawah==0)
			bawah=3;
		frekp=0;
		frekt=0;
	}
	if (ada)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
