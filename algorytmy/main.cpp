#include "head.h"


int main() {

	char jolo;

	for (;;) {

		cout << "MENU GLOWNE" << endl;
		cout << "_________________" << endl << endl;
		cout << "1. Grupa pierwsza" << endl;
		cout << "2. Grupa Druga" << endl;
		cout << "3. Pomoc" << endl;
		cout << "4. Exit" << endl;
		cout << "_________________" << endl;
		cout << "Wybierz: ";
		jolo = getch();

		switch (jolo) {
		case '1': grupapierwsza(); break;
		case '2': grupadruga(); break;
		case '3': pomoc(); break;
		case '4': cout << endl; exit(0);
		default: cout << endl << "Nie ma takiej opcji! Musisz wybrac z dostepnych opcji: 1,2,3 lub 4" << endl;
			system("PAUSE");
			system("cls");
		}
	}


	getchar();
	system("cls");
	return 0;
}
