#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

#include<iostream>
#include<conio.h>
#include<time.h>
#include<windows.h>
#include<stdio.h>
#include<fstream>

using namespace std;

void wypelnianie(int *t, int ile);
void zapis(int *t1, int ile);
void zapis1(int *t1, int ile);
void zapis2(int *t1, int ile);
void odczyt(int *t2);
void odczyt1(int *t2);
void odczyt2(int *t2);
void odczyt3(int *t2);
void qs_w(int *t, int l, int p);
void qs_o(int *t, int l, int p);
void sort_bbom(int *t, int n);
void selectionSort(int *arr, int n);
void insertSort(int *arr, int n);
void qsort(int *t, int l, int p);
void shellSort(int *arr, int n);
void heapSort(int *arr, int n);
void grupapierwsza();
void grupadruga();
void pomoc();


#endif // HEAD_H_INCLUDED