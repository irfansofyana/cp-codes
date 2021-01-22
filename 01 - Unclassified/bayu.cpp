#include <bits/stdc++.h>
using namespace std;

// Bismillah..
//
// Program Runtuh (OSN 2006)
// Link : https://training.ia-toki.org/training/curriculums/1/courses/11/chapters/50/problems/223/
// STATUS : Wrong Answer (1)

char matriks[25][10];
bool hapus();
int R,C;
void swap(char &a, char &b);
void runtuh();
void isi();
void cetak();
int maximum = -1;

int main(){
    isi();
    runtuh();
    cetak();
    return 0;
}

void swap(char &a, char &b){
    char tmp = a;
    a = b;
    b = tmp;
}

void isi(){
    scanf("%d %d", &R, &C);
    for(int i = 0; i < R; i++){
        scanf("%s",matriks[i]);
    }
}

void cetak(){
    for(int i = 0; i < R; i++){
        printf("%s\n",matriks[i]);
    }
}

bool hapus(){
    bool hasil = false;
    for(int i = 0; i < R; i++){
        bool hapuskan = true;
        for(int j = 0; j < C; j++){
            if(matriks[i][j] == '0'){
                hapuskan = false;
            }
        }

        if(hapuskan){
            hasil = true;
            maximum = i;
            for(int j = 0; j< C; j++){
                matriks[i][j] = '0';
            }
        }
    }

    return hasil;
}

void runtuh(){
    if(hapus()){
        for(int j=0; j < C; j++){
            for(int k=0; k <= maximum; k++){
                for(int i = k; i < R-1; i++){
                    if((matriks[i+1][j] == '1') && (i >= maximum)){
                        break;
                    }else{
                        if(matriks[i+1][j] == '1'){
                            continue;
                       }else{
                           swap(matriks[i][j], matriks[i+1][j]);
                       }
                    }
                }
            }
        }

        runtuh();
    }
}