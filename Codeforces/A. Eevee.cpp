#include <bits/stdc++.h>
using namespace std;

int n;
int i,j;
string s[]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
string input;
bool cek;
int main(){
	cin>>n;
	cin>>input;
	if (n==6) cout<<"espeon"<<endl;
	else if (n==8) cout<<"vaporeon"<<endl;
	else if (n==7){
		cek=true;
		for (i=0;i<input.length();i++){  //cek jolteon
			if (input[i]!='.') {
				if (input[i]!=s[1][i]){
					cek=false;
					break;
				}
			}
		}
		if (cek) cout<<"jolteon"<<endl;
		else{
			cek=true;
			for (i=0;i<input.length();i++){ //cek flareon
				if (input[i]!='.') {
					if (input[i]!=s[2][i]){
						cek=false;
						break;
					}
				}
			}
			if (cek) cout<<"flareon"<<endl;
			else{
				cek=true;	
				for (i=0;i<input.length();i++){ //cek umbreon
					if (input[i]!='.') {
						if (input[i]!=s[4][i]){
							cek=false;
							break;
						}	
					}
				}	
			if (cek) cout<<"umbreon"<<endl;
			else{
				cek=true;	
				for (i=0;i<input.length();i++){ //cek leafeon
					if (input[i]!='.') {
						if (input[i]!=s[5][i]){
							cek=false;
							break;
						}
					}
				}
				if (cek) cout<<"leafeon"<<endl;
				else{
				cek=true;		
				for (i=0;i<input.length();i++){ //cek glaceon
					if (input[i]!='.') {
						if (input[i]!=s[6][i]){
						cek=false;
						break;
					}
				}
				}
				if (cek) cout<<"glaceon"<<endl;
				else{
					cek=true;	
					for (i=0;i<input.length();i++){ //cek sylveon
						if (input[i]!='.') {
							if (input[i]!=s[7][i]){
								cek=false;
								break;
							}
						}		
					}		
					if (cek) cout<<"sylveon"<<endl;
				}
			}
				}
			}
		}
	}
	}
