#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,j;
int idx1,idx2;
bool cek1,cek2;
bool simpulan;

int main(){
	cin.tie(0) ios_base::sync_with_stdio(0);
	cin>>s;
	idx1=s.find("yx",0);
	simpulan=true;
	while (simpulan){
		cek1=true; cek2=true;
		idx1=s.find("yx",0);
		while (idx1>=0 && idx1<s.length()){
			s.erase(idx1,2);
			s.insert(idx1,"xy");
			idx1=s.find("yx",idx1+1);
		}
		idx2=s.find("xy",0);
		while (idx2>=0 && idx2<s.length()){
			s.erase(idx2,2);
			idx2=s.find("xy",idx2+1);
		}
		if (s.length()==1) simpulan=false;
		else{
			if (!(s.find("yx")>=0 && s.find("yx")<s.length())) cek1=false;
			if (!(s.find("xy")>=0 && s.find("xy")<s.length())) cek2=false;
			simpulan=cek1||cek2;
		}
	}
	cout<<s<<endl;
	return 0;
}
