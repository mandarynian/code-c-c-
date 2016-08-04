#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


/*int losowanie(int **t, int i, int j, int max, int min) {
	int rmk, rmw, rnw, rnk;
losowanie:
	rmw = rand() % i;
	rmk = rand() % j;

	rnw = rand() % i;
	rnk = rand() % j;
	if (rnk == rmk) {
		goto losowanie;
	}
	t[rmw][rmk] = max;
	t[rnw][rnk] = min;
}*/

int wymiana(int **t, int w, int k) {
	int pom = 0, kmin = 0, kmax = 0, pommax = 0, pommin = 0;
	pommax = t[0][0];
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
		{
			pom = t[i][j];
			if (pommax < pom) {
				pommax = pom;
				kmax = j;
			}
		}
	}
	pommin = t[0][0];
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
		{
			pom = t[i][j];
			if (pommin > pom) {
				pommin = pom;
				kmin = j;
			}
		}
	}

	for (int i = 0; i < w; i++) {
		pom = t[i][kmax];
		t[i][kmax] = t[i][kmin];
		t[i][kmin] = pom;
	}

	printf("kmax %d wmax %d min %d pommin %d\n", kmax, pommax, kmin, pommin);

}

int main() {

	int **tablica = NULL, w, k;
	int max = 30, min = -30, rmw, rmk, rnw, rnk;
	int pom = 0, pommin = 0, pommax = 0, kakao = 0, makao = 0;
	int kmax = 0, kmin = 0;

	printf("Podaj liczbe kolumn i wierszy");
	scanf("%d %d", &k, &w);

	srand(time(NULL));

	tablica = (int **)malloc(w * sizeof(int *));
	for (int i = 0; i < w; i++) {
		tablica[i] = (int*)malloc(k * sizeof(int));
		for (int j = 0; j<k; j++) {
			tablica[i][j] = rand() % 20 * pow(-1,rand()%2);
		}
	}

	printf("Dane wygenerowane losowo z przedzialu od 0 do 20\n");
	for (int i = 0; i < w; ++i, printf("\n"))
		for (int j = 0; j < k; ++j)
			printf("%.1d\t", tablica[i][j]);

	//losowanie(tablica, w, k, 30, -30);

	printf("Dane po wlosowaniu do nich liczby najwiekszej i najmniejszej\n");
	for (int i = 0; i < w; ++i, printf("\n"))
		for (int j = 0; j < k; ++j)
			printf("%.1d\t", tablica[i][j]);

	wymiana(tablica, w, k);

	printf("Zmiana kolumn miejscami z najmniejszya i najwieksza liczba\n");
	for (int i = 0; i < w; ++i, printf("\n"))
		for (int j = 0; j < k; ++j)
			printf("%.1d\t", tablica[i][j]);

	for (int i = 0; i<w; i++)
		free(tablica[i]);
	free(tablica);

	system("pause");
	return 0;
}