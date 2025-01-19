#include <stdio.h>
#include "funkcje.h"

int main()
{
	////1. Napisz program, który wyznaczy silnię z liczby n sposobem rekurencyjnym. 
	
	//int n;
	//printf("Podaj liczbe naturalna z ktorej chcesz obliczyc silnie: ");
	//scanf("%d", &n);
	//printf("wynik: %d", silnia(n));

	////2. Napisz program wyznaczający n - ty wyraz ciągu zdefiniowanego przez następujący wzór rekurencyjny :
	////𝑎𝑛 = {
	////−1 𝑑𝑙𝑎 𝑛 = 1
	////−𝑎𝑛−1 ∙ 𝑛 − 2 𝑑𝑙𝑎 𝑛 > 1

	//int a;
	//printf("Podaj liczbe naturanlna do funkcji: ");
	//scanf("%d", &a);
	//printf("wynik: %d", fun(a));

	////3. Napisz program wyznaczający NWD(a,b) metodą rekurencyjną.

	//int a1, b1;
	//printf("Podaj pierwsza liczbe: ");
	//scanf("%d", &a1);
	//printf("Podaj druga liczbe: ");
	//scanf("%d", &b1);
	//printf("Najwiekszy wspolny dzielnik liczb: %d", nwd(a1, b1));

	////4. Dana jest następująca funkcja rekurencyjna: ... Przenalizuj działanie funkcji rekurencyjnej i uzupełnij poniższą tabelę.
	////     i        2   3   4   5   6   7   8
	////  wynik(i)    1   1   3   3   5   5   9

	////5. Wykorzystując funkcje rekurencyjną napisz wykonaj zamianę liczby w systemie dziesiętnym na system dwójkowy.

	//int a2;
	//printf("Podaj liczbe do zamiany na system binarny: ");
	//scanf("%d", &a2);
	//printf("wynik: %d", bin(a2));

	////6. Napisz funkcje rekurencyjną wyznaczająca ciąg Fibanaccego

	//int a3;
	//printf("Podaj liczbe do ciagu fibonaciego: ");
	//scanf("%d", &a3);
	//printf("wynik: %d", fib(a3));

	////8. Dana jest następująca funkcja rekurencyjna: ... 
	////a) Podaj wszystkie wywołania rekurencyjne funkcji F oraz obliczany po każdym wywołaniu wynik, jeśli na początku wywołamy F(2, 10).
	//// wywolanie   wynik
	////  f(2,10)    1024
	////  f(2,9)      512
	////  f(2,3)       8
	////  f(2,1)       2
	////b) Uzupełnij tabelę o brakujące elementy
	//// x  n  wynik f(x,n)
	//// 2  2      4
	//// 2  3      8 
	//// 3  4      81
	//// 2  5      32
	//// 2  8      256
	//// 2  10     1024

	printf("%d", f(2, 10));

	return 0;
}