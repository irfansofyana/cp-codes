#include <bits/stdc++.h>
using namespace std;
struct paket{
	string nama,asli;
	int pos;
};
int n,m,i,j,k;
string s,smt,l;
paket kamus[10100];
char nama[10100];
char temp[10100];
int ans[10100];
string in[10100],jawaban[10100];
void input(){
	kamus[i].asli=s; smt="";
	for (j=0;j<s.length();j++) temp[j]=s[j];
	k=s.length();
	sort(temp,temp+k); 
	for (j=0;j<k;j++) smt=smt+temp[j];
	kamus[i].nama=smt;	
	kamus[i].pos=i;
}
bool comp(paket a,paket b){
	if (a.nama<b.nama) return true;
	else return false;
}
int binary_search(int x,int y,string s){
	int tengah=(x+y)/2;
	if (x>y) return -1;
	else if (kamus[tengah].nama==s) return tengah;
	else if (kamus[tengah].nama<s) return binary_search(tengah+1,y,s);
	else if (kamus[tengah].nama>s) return binary_search(x,tengah-1,s);
}
void input1(){
		for (j=0;j<smt.length();j++){
			temp[j]=smt[j];
		}
		sort(temp,temp+smt.length());
		l="";
		for (j=0;j<smt.length();j++){
			l=l+temp[j];
		}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (i=0;i<n;i++){
		cin>>s;
		in[i]=s;
		input();
	}
	sort(kamus,kamus+n,comp);
	cin>>m;
	for (i=0;i<m;i++){
		cin>>smt; int idx;
		input1();
		if (binary_search(0,n,l)!=-1){
			j=binary_search(0,n,l); idx=0;
			while (kamus[j].nama==l && j>=0) {
				ans[idx]=kamus[j].pos;
				j--; idx++;
				if (j<0) break;
			}
			j=binary_search(0,n,l)+1;
			if (j!=n){
			while (kamus[j].nama==l && j<n) {
				ans[idx]=kamus[j].pos;
				j++; idx++;
				if (j>=n) break;
			}
			}
			sort(ans,ans+idx);
			for (j=0;j<idx;j++){
				jawaban[j]=in[ans[j]];
			}
			sort(jawaban,jawaban+idx);
			for (j=0;j<idx;j++) cout<<jawaban[j]<<endl;
			cout<<"--"<<endl;
		}
		else cout<<"--"<<endl; 
	} 
}
