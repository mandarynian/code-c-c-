#include "head.h"


void grupadruga() {

	int ile, *tab1, *tab2, *tab3;
	clock_t start, stop;
	double czas;
	fstream plik, plik2;

	plik2.open("wyniki_grupy_drugiej.txt", ios::trunc | ios::out);
	if (plik2.is_open() == true) {
		cout << endl << "Zapis pomiarow dokona sie  do pliku ~ wyniki_grupy_pirwszej.txt" << endl;
	}
	else {
		cout << "Error! Plik nie zostal otwarty!" << endl;
	}

	tab1 = new int[ile];
	tab2 = new int[ile];

	cout << "Ile elementow?" << endl << ": ";
	cin >> ile;
	// DZIALANIE TLA PROGRAMU
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

	// SORTOWANIE QUICKSORT

	plik2 << "WYNIKI DLA GRUPY DRUGIEJ" << endl;

	odczyt1(tab3);
	cout << "Sortowanie QuickSort..." << endl;
	plik2 << endl << "Sortowanie QuickSort dla liczb wygenerowanych losowo:" << endl;
	start = clock();
	qsort(tab3, 0, ile - 1);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik2 << czas << "s" << endl;

	odczyt2(tab3);
	plik2 << "Sortowanie QuickSort dla liczb posortowanych wlascwie:" << endl;
	start = clock();
	qsort(tab3, 0, ile - 1);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik2 << czas << "s" << endl;

	odczyt3(tab3);
	plik2 << "Sortowanie QuickSort dla liczb posortowanych wlascwie:" << endl;
	start = clock();
	qsort(tab3, 0, ile - 1);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik2 << czas << "s" << endl;

	//  SORTOWANIE METODA SEHLLA

	odczyt1(tab3);
	cout << "Sortowanie Shell'a..." << endl;
	plik2 << endl << "Sortowanie Shell'a dla liczb wygenerowanych losowo:" << endl;
	start = clock();
	shellSort(tab3, ile);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik2 << czas << "s" << endl;

	odczyt2(tab3);
	plik2 << "Sortowanie Shell'a dla liczb posegregowanych wlasciwie:" << endl;
	start = clock();
	shellSort(tab3, ile);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik2 << czas << "s" << endl;

	odczyt3(tab3);
	plik2 << "Sortowanie Shell'a dla liczb posegregowanych odwrotnie:" << endl;
	start = clock();
	shellSort(tab3, ile);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik2 << czas << "s" << endl;

	// SORTOWANIE PRZEZ KOPCOWANIE

	odczyt1(tab3);
	cout << "Sortowanie przez kopcowanie..." << endl;
	plik2 << endl << "Sortowanie przez kopcowanie dla danych wygenetrowanych losowo:" << endl;
	start = clock();
	heapSort(tab3, ile);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik2 << czas << "s" << endl;

	odczyt2(tab3);
	plik2 << "Sortowanie przez kopcowanie dla danych posortowanaych wlasciwie:" << endl;
	start = clock();
	heapSort(tab3, ile);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik2 << czas << "s" << endl;

	odczyt3(tab3);
	plik2 << "Sortowanie przez kopcowanie dla danych posortowanaych odwrotnie:" << endl;
	start = clock();
	heapSort(tab3, ile);
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	plik2 << czas << "s" << endl;

	delete[] tab3;
	system("PAUSE");
	system("cls");
}
