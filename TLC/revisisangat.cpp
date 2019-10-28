//-----Unit Library------------------------------
#include <stdio.h>

//-----Program Utama-----------------------------
int main(){
//-----Deklarasi variabel------------------------
    int i,j,status,solusi,m,N;
    int A[75][75],B[75][75];

//-----Input Matriks A---------------------------   
    scanf("%d %d",&m,&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            scanf("%d",&A[i][j]);
        }   
    }

//-----Input Matriks B---------------------------   
    scanf("%d %d",&m,&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            scanf("%d",&B[i][j]);
        }
    }
   

//------Inisialisasi-----------------------------   
    solusi=0;
   
//------Matriks Identik--------------------------   
    /*
    a b c    a b c
    d e f    d e f
    g h i    g h i
    */
    status=1;
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            if(!(A[i][j]==B[i][j])){
                status=0;
                break;
            }
        }
        if(status==0) break;
    }
    if(status==1){
            printf("identik\n");
            solusi=1;
        }
   
//------Matriks Refleks Horisontal-----------------
    /*
          |
    a b c | c b a
    d e f | f e d
    g h i | i h g
          |
    */
    status=1;
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            if(A[i][j]!=B[i][N-j+1]){
                status=0;
                break;
            }
        }
        if(status==0) break;
    }
    if(status==1){
            printf("vertikal\n");
            solusi=1;
        }

//------Matriks Refleks Vertikal-------------------   
    /*
     a b c
     d e f
     g h i
    -------
     g h i
     d e f
     a b c
    */
    status=1;
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            if(A[j][i]!=B[N-j+1][i]){
                status=0;
                break;
            }
        }
        if(status==0) break;
    }
    if(status==1){
            printf("horisontal\n");
            solusi=1;
        }   
   
//------Matriks Refleks Diagonal kiri bawah--------   
    /*
    a b c  /
    d e f /
    g h i/
        /i f c
       / h e b
      /  g d a
    Analisa
    A[1][1] --> B[3][3]        A[2][1] --> B[3][2]        A[3][1] --> B[3][1]
    A[1][2] --> B[2][3]        A[2][2] --> B[2][2]        A[3][2] --> B[2][1]
    A[1][3] --> B[1][3]        A[2][3] --> B[1][2]        A[3][3] --> B[1][1]
    */
    status=1;
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            if(A[i][j]!=B[N-j+1][N-i+1]){
                status=0;
                break;
            }
        }
        if(status==0) break;
    }
    if(status==1) {
            printf("diagonal kiri bawah\n");
            solusi=1;
        }
   
//------Matriks Refleks Diagonal kanan bawah-------
    /*
      \  a d g
       \ b e h
        \c f i
    a b c\
    d e f \
    g h i  \
    Analisa
    A[1][1] --> B[1][1]        A[2][1] --> B[1][2]        A[3][1] --> B[1][3]
    A[1][2] --> B[2][1]        A[2][2] --> B[2][2]        A[3][2] --> B[2][3]
    A[1][3] --> B[3][1]        A[2][3] --> B[3][2]        A[3][3] --> B[3][3]
    */
    status=1;
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            if(A[i][j]!=B[j][i]){
                status=0;
                break;
            }
        }
        if(status==0) break;
    }
    if(status==1){
            printf("diagonal kanan bawah\n");
            solusi=1;
        }

//------Matriks Tidak Identik----------------------
    if(solusi!=1) printf("tidak identik\n");

//------Pengembalian Nilai Program Utama-----------
    return 0;
}    

