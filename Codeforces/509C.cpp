#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int N;
int now, bef;
int dignow[400], digbef[400];
int sznow, szbef;

void get (int K, int start) {
	int pos = start;
	while (K > 9) {
		dignow[pos++] = 9;
		K -= 9;
	}
	dignow[pos++] = K;
}

int main () {
	scanf ("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf ("%d", &now);
		if (i == 0) {
			get (now, 0);
			sznow = (int)(ceil ((double)now / 9.0));
		}
		else {
			for (int i = 0; i < szbef; i++) dignow[i] = digbef[i];
			if (now > bef) {
				int selisih = now - bef;
				for (int i = 0; i < szbef; i++) {
					while (dignow[i] < 9 && selisih) {
						dignow[i]++;
						selisih--;
					}
					if (!selisih) break;
				}
				if (selisih) {
					get (selisih, sznow);
				}
				sznow += (int)(ceil ((double)selisih / 9.0));
			}
			else {
				int cur = bef;
				bool sudah = false;
				for (int i = 0; i < szbef; i++) {
					cur -= dignow[i];
					if (dignow[i] != 9) {
						if (dignow[i] + 1 + cur <= now) {
							dignow[i]++;
							get (now - (dignow[i] + cur), 0);
							sudah = true;
							break;
						}
					}
					dignow[i] = 0;
				}
				if (!sudah) {
					sznow = szbef;
					dignow[sznow++] = 1;
					get (now - 1, 0);
				}
			}
		}
		for (int i = sznow - 1; i >= 0; i--) printf ("%d", dignow[i]);
		printf ("\n");
		for (int i = 0; i < sznow; i++) digbef[i] = dignow[i];
		szbef = sznow;
		bef = now;
	}
	return 0;
}