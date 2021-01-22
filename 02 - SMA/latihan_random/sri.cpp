#include <bits/stdc++.h>
using namespace std;
string s,depan,belakang;
int n,i,j;
char A[]={'A','0','0','0','3','0','0','H','I','L','0','J','M','0','O','0','0','0','2','T','U','V','W','X','Y','5','1','S','E','0','Z','0','0','8','0'};
bool is_rev,is_nat;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	while (cin>>s){
		depan=s.substr(0,s.length()/2);
		if (s.length()%2==1) belakang=s.substr((s.length()/2)+1,s.length()-(s.length()/2)-1);
		else belakang=s.substr((s.length()/2),s.length()-(s.length()/2));
	//	cout<<depan<<" "<<belakang<<endl;
		i=0; j=belakang.length()-1;
		is_rev=true; is_nat=true;
		while (i<depan.length() && is_rev){   //cek reverse
			if (depan[i]>='1' && depan[i]<='9'){
				if (depan[i]==belakang[j]){
					if (!(depan[i]=='4' && depan[i]=='6' && depan[i]=='7' && depan[i]=='9')){
						i++;
						j--;
					}
					else{
						is_rev=false;
						break;
					}
				}
				else{
					if (depan[i]=='2' && belakang[j]=='S') {
						i++;
						j--;
					} 
					else if (depan[i]=='3' && belakang[j]=='E'){
						i++; j--;
					}
					else if (depan[i]=='5' && belakang[j]=='Z'){
						i++; j--;
					}
					else {
						is_rev=false;
						break;
					}
				}
			}
			else{
				if (A[int(depan[i])-65]!=belakang[j]){
					is_rev=false;
					break;
				}
				else {
					i++;
					j--;
				}
			}
		}
		i=0; j=belakang.length()-1;
		while (i<depan.length()&&is_nat){
			if (depan[i]!=belakang[j]){
				is_nat=false;
				break;
			}
			else{
				i++;
				j--;
			}
		}
		if (is_nat && is_rev) cout<<s<<" -- is a mirrored palindrome."<<endl;
		else if (is_nat && !is_rev) cout<<s<<" -- is a regular palindrome."<<endl;
		else if (!is_nat && is_rev) cout<<s<<" -- is a mirrored string."<<endl;
		else cout<<s<<" -- is not a palindrome."<<endl;
	}
	return 0;
}
