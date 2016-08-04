#include "head.h"


// ALGORYTMY DLA GRUPY PIERWSZEJ
void sort_bbom(int *t, int n) { // sortowanie babelkowe
	for (int i = 1; i<n; i++)
		for (int j = n - 1; j >= 1; j--) {
			if (t[j] < t[j - 1]) {
				int bufor;
				bufor = t[j - 1];
				t[j - 1] = t[j];
				t[j] = bufor;
			}
		}
}

void selectionSort(int *arr, int n) //sortowanie przez selekcje
{
	int i, j, pmin;

	for (j = 0; j<n - 1; j++)
	{
		pmin = j;
		for (i = j + 1; i<n; i++)
			if (arr[i]<arr[pmin]) pmin = i;
		swap(arr[pmin], arr[j]);
	}
}

void insertSort(int *arr, int n) //sortowanie poprzez wstawianie
{
	int i, j, x;

	for (j = n - 2; j >= 0; j--)
	{
		x = arr[j];
		i = j + 1;
		while ((i<n) && (x>arr[i]))
		{
			arr[i - 1] = arr[i];
			i++;
		}
		arr[i - 1] = x;
	}
}

// ALGORYTMY DLA GRUPY DRUGIEJ
void qsort(int *t, int l, int p) { //aglorytm quicksort
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
	if (j > l) qsort(t, l, j);
	if (i < p) qsort(t, i, p);
}
void shellSort(int *arr, int n) // SORTOWANIE SEHLLA
{
	int h, i, j, x;

	for (h = 1; h<n; h = 3 * h + 1);
	h /= 9;
	if (!h) h++;

	while (h)
	{
		for (j = n - h - 1; j >= 0; j--)
		{
			x = arr[j];
			i = j + h;
			while ((i<n) && (x>arr[i]))
			{
				arr[i - h] = arr[i];
				i += h;
			}
			arr[i - h] = x;
		}
		h /= 3;
	}
}
void heapSort(int *arr, int n) //(tablica, ilosc liczb do posortowania)
{
	int i, j, k, m, x;

	//Budujemy kopiec
	for (i = 2; i <= n; i++)
	{
		j = i;
		k = j / 2;
		x = arr[i];
		while ((k>0) && (arr[k]<x))
		{
			arr[j] = arr[k];
			j = k;
			k = j / 2;
		}
		arr[j] = x;
	}

	//Rozbieramy kopiec
	for (i = n; i>1; i--)
	{
		swap(arr[1], arr[i]);
		j = 1;
		k = 2;
		while (k<i)
		{
			if ((k + 1<i) && (arr[k + 1] > arr[k])) m = k + 1;
			else m = k;
			if (arr[m] <= arr[j]) break;
			swap(arr[j], arr[m]);
			j = m;
			k = j + j;
		}
	}
}
