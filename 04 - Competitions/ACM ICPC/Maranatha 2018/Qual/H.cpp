#include <bits/stdc++.h>
#define inp() freopen("in.txt", "r", stdin);
#define out() freopen("out.txt", "w", stdout);
#define IO inp() out()

using namespace std;

string val[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
char tipe[4] = {'S', 'H', 'D', 'C'};
int n,t,k;
bool prec[13][4];
char s[4];

void refill(){
    for(int i = 0; i < 13; i++)for(int j = 0; j < 4; j++)prec[i][j] = false;
}

string read(){
    char x;
    string res;
    while(true){
        x = getchar();
        if(x==' ' or x == '\n')break;
        res += x;
    }
    return res;
}

int conv(char x){
    if(x == 'S')return 0;
    else if(x == 'H')return 1;
    else if(x == 'D')return 2;
    else if(x == 'C')return 3;
}

void opt(char s[]){
    if(s[0] == '1' and s[1] == '0'){
        if(!prec[9][conv(s[2])])k++;
        prec[9][conv(s[2])] = true;
    } else if(s[0] == 'A'){
        if(!prec[0][conv(s[1])])k++;
        prec[0][conv(s[1])] = true;
    } else if(s[0] == 'J'){
        if(!prec[10][conv(s[1])])k++;
        prec[10][conv(s[1])] = true;
    } else if(s[0] == 'Q'){
        if(!prec[11][conv(s[1])])k++;
        prec[11][conv(s[1])] = true;
    } else if(s[0] == 'K'){
        if(!prec[12][conv(s[1])])k++;
        prec[12][conv(s[1])] = true;
    } else {
        if(!prec[s[0]-'1'][conv(s[1])])k++;
        prec[s[0]-'1'][conv(s[1])] = true;
    }
}

bool cek(){
    for(int i = 0; i < 13; i++){
        for(int j = 0; j < 4; j++){
            if(!prec[i][j])return false;
        }
    }
    return true;
}

void debug(){
    for(int i = 0; i < 13; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", prec[i][j]);
        }
        printf("\n");
    }
}

int main(){
		// IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while(t--){
        refill();
        cin>>n;
        k = 0;
        //getchar();
        for(int i = 0; i < n; i++){
        		gets(s);
            //cout<<s<<endl;
            opt(s);
        }
        //debug();
        //cout<<cek.size()<<endl;
        if(k >= 52){
            cout<<"FULLHOUSE "<<(n-52)<<'\n';
        } else {
            cout<<"INCOMPLETE\n";
        }
    }
    return 0;
}