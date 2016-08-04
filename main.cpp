#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE 256
void liczymyznaki(int *c, char *dd, int *j, int *jolo);
//void alokujpamiec(int g,char **ma, int *schabowy);


int main() {
	char d[MAX_LINE], *dd, b, p = 'a';
	char **macierz;
	int j = -1, c = 0, i;
	int kupa = 0, kibel = 0;
	int jolo[MAX_LINE];

	dd = gets(d);
	liczymyznaki(&c, dd, &j, (int *)&jolo);


	int ziemniak;
	macierz = (char**)malloc(j * sizeof(char *));


	for (int h = 0; h < j; h++) {
		ziemniak = jolo[h];
		macierz[h] = (char*)malloc(ziemniak * sizeof(char *));
	}



	while ((b = *dd) != '\0') {

		if (b != ' ') {
			macierz[kupa][kibel] = b;
			if (p == ' ')
				kupa++;
		}
		p = b;
		kibel++;
		dd++;
	}

	for (i = 0; i < j; i++) {
		printf("%s \n", macierz[i]);
	}

	system("pause");
	return 0;
}

void liczymyznaki(int *c, char *dd, int *j, int *t) {
	char b, p = ' ';
	int gargamel = 0;
	while (b = *dd, b != '\0') {
		if (b != ' ') {
			c++;
			if (p == ' ') {
				*j += 1;
				t[gargamel] = (int)c;
				c = 0;
				gargamel++;
			}
		}
		p = b;
		dd++;
	}
}
