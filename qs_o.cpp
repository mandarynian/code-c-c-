//funkcja sortuj¹ca odwrotnie
#include "naglowek.h"

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