#include <bits/stdc++.h>
using namespace std;
 
int r, c, i, j;
char arr[30][30];
vector<int>wack;
void cek();
 
void runtuhkan(int mulai){
    //ga masuk
    //cout<<"oke runtuhkan"<<endl;
 
    int i, j, pos;
 
    for(i=mulai-1; i>=1; i--){
        for(j=1; j<=c; j++){
           if (arr[i][j]=='1'){
                pos=i;
                while((pos<r)&&(arr[pos+1][j]!= '1')){
                    swap(arr[pos][j], arr[pos+1][j]);
                    pos++;
                }
           }
 
        }
 
    }
 
    wack.clear();
    cek();
 
}
 
void cek(){
 
    int i, j;
    bool yano;
 
   // cout<<"oke cek"<<endl;
 
    //cek apa ada yg penuh
    for(i=1; i<=r; i++){
        yano=true;
        for(j=1; j<=c && yano; j++){
         if (arr[i][j]!='1') yano=false;
        }
 
        if (yano) wack.push_back(i);
    }
 
    //wack.size() kenapa selalu 0
    //cout<<"wack.size(): "<<wack.size()<<endl;
 
    //hilangin yg penuh
    for(i=0; i<wack.size(); i++){
        for(j=1; j<=c; j++){
            arr[wack[i]][j]='0';
        }
    }
    if (wack.size()!= 0)runtuhkan(wack[wack.size()-1]);
}
 
 
int main(){
 
    cin>>r>>c;
    for(i=1; i<=r; i++){
        for(j=1; j<=c; j++){
            cin>>arr[i][j];
        }
    }
 
 
    cek();
    for(i=1; i<=r; i++){
        for(j=1; j<=c; j++){
            cout<<arr[i][j];
        }
 
        cout<<endl;
 
    }
 
 
}
