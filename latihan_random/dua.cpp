/*program ini dibuat untuk menghitung jarak dua buah tanggal. Program ini dibuat oleh Irfan Sofyana*/

#include <bits/stdc++.h>
#define irfan using
#define sofyana namespace
#define ganteng std
irfan sofyana ganteng;
int a,b,c,d,e,f,i,j,t;
int jawab;
char temp;
bool cekkabisat(int p){
	if (((p%4==0) && (p%100>0))||(p%400==0)) return true;
	else return false;
}	

int main(){
	jawab=0;
	cin>>a>>temp>>b>>temp>>c;
	cin>>d>>temp>>e>>temp>>f;
	for (i=c+1;i<=f-1;i++){
		if (cekkabisat(i)) jawab+=366;
		else jawab+=365;
	}
	t=0;
	if (cekkabisat(c)){
		for (j=1;j<=b-1;j++){
			if (j==2) t+=29;
			else if (j%2==0) t+=30;
			else t+=31; 
		}
		t=t+a;
		jawab+=366-t;
		t=0;
		if (cekkabisat(f)){
			for (j=1;j<=e-1;j++){
			if (j==2) t+=29;
			else if (j%2==0) t+=30;
			else t+=31;
			}
		}
		else{
			for (j=1;j<=e-1;j++){
			if (j==2) t+=28;
			else if (j%2==0) t+=30;
			else t+=31;	
		}
		jawab+=t;
	}
	}
	else{
		for (j=1;j<=b-1;j++){
			if (j==2) t+=28;
			else if (j%2==0) t+=30;
			else t+=31; 
		}
		t=t+a;
		jawab+=365-t;
		t=0;
		if (cekkabisat(f)){
			for (j=1;j<=e-1;j++){
			if (j==2) t+=29;
			else if (j%2==0) t+=30;
			else t+=31;
			}
		}
		else{
			for (j=1;j<=e-1;j++){
			if (j==2) t+=28;
			else if (j%2==0) t+=30;
			else t+=31;	
		}
		jawab+=t;
		}
	}
	cout<<jawab<<endl;
}
