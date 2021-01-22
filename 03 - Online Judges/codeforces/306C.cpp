#include <bits/stdc++.h>
using namespace std;

string s,ans,temp,a,b,c;
int n,i,j,k;
string kelipatan[130];
bool isian=false;

string jumlah(string a,string b){
	string result="",temp="";
	int sisa=0,hasil;
	for (i=0;i<a.size()-b.size();i++)
		temp = '0'+temp;
	b = temp+b;
	for (i=a.size()-1;i>=0;i--) {
		result = char((a[i]-'0'+b[i]-'0'+sisa)%10+48)+result;
		sisa = (a[i]-'0'+b[i]-'0'+sisa)/10;	
	}
	while (sisa>0) {
		result = char(sisa%10+48)+result;
		sisa/=10;
	}
	return result;
}
void isi(){
	string smt="8";
	kelipatan[0] = "0";
	for (int z=1;z<=125;z++) {
		kelipatan[z] = jumlah(kelipatan[z-1],smt);
		//cout<<kelipatan[z]<<endl;
	}
}
int binary_search(int a,int b,string c){
	int tengah = (a+b)/2;
	if (a>b) return -1;
	else if (kelipatan[tengah]==c) return tengah;
	else if (kelipatan[tengah]>c) return binary_search(a,tengah-1,c);
	else if (kelipatan[tengah]<c) return binary_search(tengah+1,b,c);
}
int main(){
	cin >> s;
	isi();
	sort(kelipatan,kelipatan+126);
	//for (i=0;i<10;i++) cout<<kelipatan[i]<<endl;
	if (s.size()>=3) {
		for (i=0;i<s.size();i++) {
			for (j=i+1;j<s.size();j++){
				for (k=j+1;k<s.size();k++) {
					temp =""; a=""; b="";
					temp = s[i];	
					a = s[j];
					b = s[k];
					//cout << temp+a+b << endl;
					if (binary_search(0,125,temp+a+b)!=-1) {
						isian = true;
						break;
					}
				}
				if (isian) break;
			}
			if (isian) break;
		}
		if (isian) {
			puts("YES");
			cout << temp+a+b << endl;
		}
		else puts("NO");
	}
	else {
		if (binary_search(0,125,s)!=-1) {
			puts("YES");
			cout << kelipatan[binary_search(0,125,s)] << endl;
		}
		else {
			if (s[0]=='8' || s[1]=='8') {
				puts("YES");
				cout << 8 << endl;
			}
			else if (s[1]=='0') {
				puts("YES");
				cout << 0 << endl;
			}
			else puts("NO");
		}
	}
	return 0;
}
