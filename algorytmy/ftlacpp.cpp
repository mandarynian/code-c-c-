#include "head.h"

void wypelnianie(int *t, int ile) { //Funkcja wype³niaj¹ca tablicê losowo wyenerowanymi liczbami
	srand((time(NULL)));
	for (int i = 0; i < ile; i++) {
		t[i] = rand() % 200 - 101;
	}
}
void zapis(int *t1, int ile) { //Funkcja zapisuj¹ca losowo wygenerowane liczby do pliku
	fstream plik;
	plik.open("liczby_losowe.txt", ios::trunc | ios::out);
	if (plik.is_open() == true) {
		cout << "Zapis liczb losowych do pliku ~ liczby_losowe.txt" << endl;
	}
	else {
		cout << "Error! Plik nie zostal otwarty!" << endl;
	}
	for (int i = 0; i < ile; i++) {
		plik << t1[i] << endl;
	}
	plik.close();
}
void zapis1(int *t1, int ile) { //Funkcja zapisuj¹ca losowo wygenerowane liczby do pliku
	fstream plik;
	plik.open("liczby_wlasciwe.txt", ios::trunc | ios::out);
	if (plik.is_open() == true) {
		cout << "Zapis liczb wlasciwych do pliku ~ liczby_wlasciwe.txt" << endl;
	}
	else {
		cout << "Error! Plik nie zostal otwarty!" << endl;
	}
	for (int i = 0; i < ile; i++) {
		plik << t1[i] << endl;
	}
	plik.close();
}
void zapis2(int *t1, int ile) { //Funkcja zapisuj¹ca losowo wygenerowane liczby do pliku
	fstream plik;
	plik.open("liczby_odwrotne.txt", ios::trunc | ios::out);
	if (plik.is_open() == true) {
		cout << "Zapis liczb odwrotnych do pliku ~ liczby_odwrotne.txt" << endl;
	}
	else {
		cout << "Error! Plik nie zostal otwarty!" << endl;
	}
	for (int i = 0; i < ile; i++) {
		plik << t1[i] << endl;
	}
	plik.close();
}

void odczyt(int *t2) {
	int in = 0;
	ifstream liczby("liczby_losowe.txt", ios::in);

	if (!liczby) {
		cout << "Nie mozna otworzyc pliku";
	}

	while (!liczby.eof())
		liczby >> t2[in++];

	liczby.close();
}
//sortowanie w³aœciwe QS
void qs_w(int *t, int l, int p) {
	int v = t[(l + p) / 2], i = l, j = p;

	do {
		while (t[i] < v)
			i++;
		while (t[j] > v)j--;
		if (i <= j) {
			swap(t[i], t[j]);
			i++;
			j--;
		}
	} while (i <= j);
	if (j > l) qs_w(t, l, j);
	if (i < p) qs_w(t, i, p);
}

//Sortowanie odwrotne QuickSort
void qs_o(int *t, int l, int p) {
	int v = t[(l + p) / 2], i = l, j = p;

	do {
		while (t[i] > v)
			i++;
		while (t[j] < v)j--;
		if (i <= j) {
			swap(t[i], t[j]);
			i++;
			j--;
		}
	} while (i <= j);
	if (j > l) qs_o(t, l, j);
	if (i < p) qs_o(t, i, p);
}
void odczyt1(int *t2) {
	int in = 0;
	ifstream liczby("liczby_losowe.txt", ios::in);

	if (!liczby) {
		cout << "Nie mozna otworzyc pliku";
	}

	while (!liczby.eof())
		liczby >> t2[in++];

	liczby.close();
}
void odczyt2(int *t2) {
	int in = 0;
	ifstream liczby("liczby_wlasciwe.txt", ios::in);

	if (!liczby) {
		cout << "Nie mozna otworzyc pliku";
	}

	while (!liczby.eof())
		liczby >> t2[in++];

	liczby.close();
}
void odczyt3(int *t2) {
	int in = 0;
	ifstream liczby("liczby_odwrotne.txt", ios::in);

	if (!liczby) {
		cout << "Nie mozna otworzyc pliku";
	}

	while (!liczby.eof())
		liczby >> t2[in++];

	liczby.close();
}
