#include <bits/stdc++.h>
using namespace std;
int N, M;
char peta[50][50];
bool ada[50];

int main () {
	scanf ("%d %d\n", &N, &M);
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++)
			scanf ("%c", &peta[i][j]);
		getchar();
	}
	puts ("***");
	for (int i=0; i<N; i++) {
		ada[i] = false;
		for (int j=0; j<M && !ada[i]; j++)
			if (peta[i][j]=='0') ada[i] = true;
		
		if (ada[i]) {
			if (i==0 || !ada[i-1]) {
				for (int j=0; j<M-1; j++)
					if (peta[i][j]=='0') printf (" _ ");
					else printf ("   ");
					
				if (peta[i][M-1]=='0') printf (" _\n");
				else printf ("\n");
			}
			for (int j=0; j<M; j++) 
				if (peta[i][j]=='.') printf ("___");
				else printf ("/ \\");
			printf ("\n");
		
			for (int j=0; j<M-1; j++) {
				if (peta[i][j]=='.') {
					if (peta[i+1][j]=='0') printf (" _ ");
					else printf ("   ");
				}
				else printf ("\\_/");
			}
			if (peta[i][M-1]=='.') {
				if (peta[i+1][M-1]=='0') printf (" _\n");
				else printf ("\n");
			}
			else printf ("\\_/\n");		
		}
		else {
			for (int j=0; j<M; j++)
				printf ("___");
			printf("\n");
		}
	}
	puts ("***");
	return 0;
}