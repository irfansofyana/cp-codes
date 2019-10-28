#include <bits/stdc++.h>
using namespace std;
string s,temp,jawaban;
int n,i,j,c,depan,belakang;
int buka[110],tutup[110];
int ukuran,banyak,indeks;
bool sudah[110];
void masukan(){
	int _a;
	banyak=0;
	for (int z=0;z<s.length();z++){
		if (s[z]=='(') {
			ukuran++; 
			buka[banyak]=z; banyak++;
		}
		else if (s[z]==')') {
			_a=banyak-1;
			while (sudah[buka[_a]]==true){
				_a--;	
			}
			sudah[_a]=true;
			tutup[buka[_a]]=z;  
		}
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	int pos1,pos2,indeks; string temp;
	cin>>s;
	memset(sudah,false,sizeof(sudah));
	masukan();
	/*for (i=0;i<ukuran;i++){
		cout<<buka[i]<<" "<<tutup[buka[i]]<<endl;
	} */
	for (i=0;i<ukuran;i++){
		depan=buka[i]+1;
		belakang=tutup[buka[i]]-1;
		temp=s.substr(depan,belakang-depan+1);
		c=int(s[buka[i]-1])-48; jawaban="";
		s.erase(buka[i]-1,tutup[buka[i]]-(buka[i]-1)+1);
		for (j=1;j<=c;j++){
			jawaban=jawaban+temp;
		}
		s.insert(buka[i]-1,jawaban);
		for (j=i+1;j<ukuran;j++){
			buka[j]=buka[j]-(temp.length()+3)+temp.length()*c;
			tutup[buka[j]]=tutup[buka[j]]-(temp.length()+3)+temp.length()*c;
		}
		cout<<s<<endl;
	} 
	//cout<<s<<endl;
}
