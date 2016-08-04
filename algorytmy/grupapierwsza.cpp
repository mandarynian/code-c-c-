#include "head.h"


void grupapierwsza() {

	int ile, *tab1, *tab2, *tab3;
	clock_t start, stop;
	double czas;
	fstream plik, plik2;

	plik.open("wyniki_grupy_pierwszej.txt", ios::trunc | ios::out);
	if (plik.is_open() == true) {
		cout << endl << "Zapis pomiarow dokona sie  do pliku ~ wyniki_grupy_pirwszej.txt" << endl;
	}
	else {
		cout << "Error! Plik nie zostal otwarty!" << endl;
	}

	tab1 = new int[ile];
	tab2 = new int[ile];

	cout << "Ile elementow?" << endl << ": ";
	cin >> ile;
	// DZIALANIE TALA PROGRAMU
	wypelnianie(tab1, ile);
	zapis(tab1, ile);
	odczyt(tab2);
	qs_w(tab2, 0, ile - 1);
	zapis1(tab2, ile);
	qs_o(tab2, 0, ile - 1);
	zapis2(tab2, ile);
	delete[] tab1;
	delete[] tab2;

	tab3 = new int[ile];

	plik << "WYNIKI DLA GRUPY PIERWSZEJ" << endl;

	//SORTOWANIE BABELKOWE

	odczyt1(tab3);
	cout << endl;
	cout << "Sortowanie babelkowe..." << endl;
	plik << "Sortowanie babelkowe dla tablicy z losowo wygenerowanymi liczbami:" << endl;
	start = clock();
	sort_bbom(tab3, ile);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik << czas << "s" << endl;

	odczyt2(tab3);
	plik << "Sortowanie babelkowe dla tablicy z posortowanymi wlasciwie liczbami:" << endl;
	start = clock();
	sort_bbom(tab3, ile);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik << czas << "s" << endl;

	odczyt3(tab3);
	plik << "Sortowanie babelkowe dla tablicy z posortowanymi odwrotnie liczbami:" << endl;
	start = clock();
	sort_bbom(tab3, ile);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik << czas << "s" << endl;

	//SORTOWANIE PRZEZ SELEKCJE

	odczyt1(tab3);
	cout << "Sortowanie poprzez selekcje..." << endl;
	plik << endl << "Sortowanie poprzez selekcje dla liczb losowych:" << endl;
	start = clock();
	selectionSort(tab3, ile);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik << czas << "s" << endl;

	odczyt2(tab3);
	plik << "Sortowanie poprzez selekcje dla liczb posortowanych wlasciwie:" << endl;
	start = clock();
	selectionSort(tab3, ile);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik << czas << "s" << endl;

	odczyt3(tab3);
	plik << "Sortowanie poprzez selekcje dla liczb posortowanych odwrotnie:" << endl;
	start = clock();
	selectionSort(tab3, ile);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik << czas << "s" << endl;

	// SORTOWANIE PRZEZ WSTAWIANIE

	odczyt1(tab3);
	cout << "Sortowanie poprzez wstawianie..." << endl;
	plik << endl << "Sortowanie poprzez wstawianie dla liczb losowo wygenerowanych:" << endl;
	start = clock();
	insertSort(tab3, ile);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik << czas << "s" << endl;

	odczyt2(tab3);
	plik << "Sortowanie poprzez wstawianie dla liczb posortowanych wlasciwie:" << endl;
	start = clock();
	insertSort(tab3, ile);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik << czas << "s" << endl;

	odczyt3(tab3);
	plik << "Sortowanie poprzez wstawianie dla liczb posortowanych odwrotnie:" << endl;
	start = clock();
	insertSort(tab3, ile);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik << czas << "s" << endl;

	delete[] tab3;
	system("PAUSE");
	system("cls");
}
