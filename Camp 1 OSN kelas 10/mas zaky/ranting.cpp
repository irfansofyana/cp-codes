#include <bits/stdc++.h>
using namespace std;
bool cek(char c){
	if ((int(c)>=97 && int(c)<=122)||(int(c)>=65 && int(c)<=90))
		return true;
	else
		return false;
}
int main(){
	int n,i,j,d=0;
	string in,A[1000],s;
	int banyak;
	bool tanda=false,penghalang=false,pertama=true;
	cin>>n; getchar();
	for (i=0;i<=n-1;i++){
		getline(cin,s);
		cout<<s<<endl;
		tanda=false;
		j=0;
		in="#";
		banyak=0;
		while (j<s.length()){
			if (s[j]!='#' && tanda==false)
				j++;
			else if (s[j]=='#' && tanda==false){
				if (cek(s[j+1])==false){
					j=j+2;
				}
				else{
					if (pertama){
					banyak++;
					in=in+s[j+1];
					tanda=true;
					j++;
					pertama=false;
					}
					else{
						if (penghalang){
							banyak++;
							in=in+s[j+1];
							tanda=true;
							j++;
							pertama=false;		
						}
					}
				}	
			}
			else if (tanda==true){
				in=in+s[j];
				j++;
			}
			else if (cek(s[j])==false && tanda==true){
				if (s[j]=='#'){
					if (cek(s[j+1]) && d==0){
						j=j+2;
						d++;
						in="#";
					}
					else if (cek(s[j+1]) && d>0){
						banyak++;
						in=in+s[j+1];
						tanda=true;
						j++;
					}	
					else{
						penghalang=true;
						tanda=false;
						j++;
					}
				}
				else{
					in="#";
					j++;
					tanda=false;
					penghalang=true;
				}
			}	
		}
	}
}
