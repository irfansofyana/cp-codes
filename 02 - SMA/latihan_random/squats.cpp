#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,banyak=0,berdiri=0,duduk=0;
	string input,output="";
	int jawaban;
	
	cin>>n;
	cin>>input;
	for (i=0;i<input.length();i++){
		if (input[i]=='x') duduk++;
		else berdiri++;
	}
	if (duduk==berdiri){
		cout<<0<<endl;
		cout<<input<<endl;
	}
	else{
		if (duduk>berdiri){
			jawaban=(n/2)-berdiri;
			for (i=0;i<input.length();i++){
				if (input[i]=='x' && banyak!=jawaban){
				output+='X';
				banyak++;
				}
				else if (input[i]=='x') output+='x';
				else output+=input[i];   
			}
			cout<<jawaban<<endl;
			cout<<output<<endl;	
		}
		else if (berdiri>duduk){
			jawaban=(n/2)-duduk;
			for (i=0;i<input.length();i++){
				if (input[i]=='X' && banyak!=jawaban){
					output+='x';
					banyak++;
				}
				else if (input[i]=='X') output+='X';
				else output+=input[i];   
			}
			cout<<jawaban<<endl;
			cout<<output<<endl;
		}
	}
}
