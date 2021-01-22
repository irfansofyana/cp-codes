#include <bits/stdc++.h>
using namespace std;
int n,m,i,j;
int x;
int satu=0,dua=0,tiga=0,empat=0,lima=0,enam=0,tujuh=0;
void cetak1(int q){
	int p;
	for (p=1;p<=q;p++)
		cout<<1<<" "<<2<<" "<<6<<endl;
}
void cetak2(int q){
	int p;
	for (p=1;p<=q;p++)
		cout<<1<<" "<<3<<" "<<6<<endl;
}
void cetak3(int q){
	int p;
	for (p=1;p<=q;p++)
		cout<<1<<" "<<2<<" "<<4<<endl;
}
int main(){
	cin>>n;
	for (i=0;i<n;i++){
		cin>>x;
		if (x==1)
			satu++;
		else if (x==2)
			dua++;
		else if (x==3)
			tiga++;
		else if (x==4)
			empat++;
		else if (x==5)
			lima++;
		else if (x==6)
			enam++;
		else if (x==7)
			tujuh++;
	}
	if (tujuh>0 || lima>0 )
		cout<<-1<<endl;
	else{
		if (satu!=empat+enam)
			cout<<-1<<endl;
		else{
			if (empat==0){
				if (enam==0){
					if (dua>0 || tiga>0)
						cout<<-1<<endl;
				}
				else{
					if (enam==dua)
						cetak1(enam);
					else if (enam==tiga)
						cetak2(enam);
					else if ((enam<dua) || (enam<tiga))
						cout<<-1<<endl;
					else if (enam>dua){
						cetak1(dua);
						if (tiga!=enam-dua)
							cout<<-1<<endl;
						else 
							cetak2(tiga);
					}
				}
			}
			else if (empat>0){
				if (dua<empat)
					cout<<-1<<endl;
				else if (dua==empat){
					if (enam>0 && tiga==0)
						cout<<-1<<endl;
					else if (enam>0){
						cetak3(empat);
						cetak2(enam);
					}
					else if (enam==0)
						cetak3(empat);
				}
				else if (dua>empat){
					cetak3(empat);
					if (enam==dua-empat){
						if (tiga>0)
							cout<<-1<<endl;
						else
							cetak1(enam);
					}
					else if (enam<dua-empat)
						cout<<-1<<endl;
					else if (enam>dua-empat){
						cetak1(dua-empat);
						cetak2(enam-dua+empat);
					}
				}
			}
		}
	}
}
