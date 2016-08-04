// funkcja g��wna 

#include "naglowek.h"
#include <cstdio>

int main() {

	cout << "Sortowanie quciksort losowych liczb z przedzialu <-100,100>" << endl;
	cout << "Podaj liczbe elemntow tablicy: ";
	cin >> ile;

	//alokacja pami�ci dla dw�ch tablic 
	tab = new int[ile];
	tab2 = new int[ile];

	//wype�nianie tablicy tab losowymi liczbami z przedzia�u <-100,100>
	srand((time(NULL)));
	for (int i = 0; i < ile; i++) {
		tab[i] = rand() % 200 - 101;
	}

	//kopiowanie zawarto�ci tablicy tab do tablicy tab2
	for (int j = 0; j < ile; j++) {
		tab2[j] = tab[j];
	}

	//sortowanie liczb w�a�ciwe
	cout << endl << "Sortowanie QuickSort wlasciwe..." << endl;
	start = clock();
	qs(tab, 0, ile - 1);
	stop = clock();
	czas1 = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("Czas potrzebny na posortowanie tablicy w sposob wlasciwy: %.9f \n", czas1);

	//sortowanie liczb odwrotne
	cout << endl << "Sortowanie QucikSort odwrotne..." << endl;
	start2 = clock();
	qs_o(tab2, 0, ile - 1);
	stop2 = clock();
	czas2 = (double)(stop2 - start2) / CLOCKS_PER_SEC;
	printf("Czas potrzebny na posortowanie tablicy w sposob odwrotny: %.9f \n", czas2);

	cout << endl;

	//zwolnienie pami�ci 
	delete[] tab2;
	delete[] tab;

	return 0;
}