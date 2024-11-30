#include <stdio.h>

int silnia(int n)
{
	if (n<2) return 1;

	return n*silnia(n - 1);
}

int fun(int n)
{
	if (n == 1) return -1;

	else return (-fun(n - 1)) * n - 2;
}

int nwd(int a, int b)
{
	if (a % b == 0) return b;
	else
	{
		return nwd(b, a % b);
	}
}

int wynik(int i)
{
	if (i < 3) return 1;
	else if (i % 2 == 0) return wynik(i - 3) + wynik(i - 1) + 1;
	else return wynik(i - 1) % 7;
}

int binarne(int x)
{
    if (x == 0) return 0;
	else return (x % 2) + 10 * binarne(x / 2);
}

int main()
{
	////1. Napisz program, który wyznaczy silnię z liczby n sposobem rekurencyjnym. 

	//printf("%d", silnia(6));

	////2. Napisz program wyznaczający n - ty wyraz ciągu zdefiniowanego przez następujący wzór rekurencyjny :
	////𝑎𝑛 = −1 𝑑𝑙𝑎 𝑛 = 1
    ////     −𝑎𝑛−1 ∙ 𝑛 − 2 𝑑𝑙𝑎 𝑛 > 1

	//printf("%d", fun(6));

	////3. Napisz program wyznaczający NWD(a,b) metodą rekurencyjną.

	//printf("%d", nwd(32, 48));

	////4. Dana jest następująca funkcja rekurencyjna:
	////funkcja wynik(i)
	////	jeżeli i < 3
	////	zwróć 1 i zakończ;
	////w przeciwnym razie
	////	jeżeli i mod 2 = 0
	////	zwróć wynik(i – 3) + wynik(i – 1) + 1
	////	w przeciwnym razie
	////	zwróć wynik(i – 1) mod 7
	
	////Przenalizuj działanie funkcji rekurencyjnej i uzupełnij poniższą tabelę.
	////	i         2         3        4        5        6        7        8
	////	wynik(i)  1         1        3        3        5        5        9

	//printf("%d", wynik(8));

	////5. Wykorzystując funkcje rekurencyjną napisz wykonaj zamianę liczby w systemie dziesiętnym na system dwójkowy.

	//printf("%d", binarne(10));

	return 0;
}