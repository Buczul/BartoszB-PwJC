#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//Zadanie 1. Napisz program wprowadzaj�cy do 10 - elementowej tablicy warto�ci : 3, 6, 9, ...

	//int tabInt[10];
	//int a = 3;

	//for (int i = 0; i < 10; i++)
	//{
	//	tabInt[i] = a;
	//	a += 3;
	//	
	//	printf("%d\n",tabInt[i]);
	//}

	//Zadanie 2. Do programu z zadania 1 dodaj instrukcje wy�wietlaj�ce co drug� warto�� z tablicy

	//int tabint[10];
	//int a = 3;

	//for (int i = 0; i < 10; i++)
	//{
	//	tabint[i] = a;
	//	a += 3;
	//	
	//	if(i%2==0)
	//	printf("%d\n",tabint[i]);
	//}

	//Wype�nij n-elementow� tablic�, zaczynaj�c od ostatniej kom�rki tablicy,
	//warto�ciami a, a5, a-10, ... . Warto�� ca�kowit� a podaje u�ytkownik.

	//int a, tabInt[10];
	//printf("Podaj a ");
	//scanf_s("%d", &a);
	//for (int i = 9; i >= 0; i--)
	//{
	//	tabInt[i] = a;
	//	a -= 5;
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", tabInt[i]);
	//}

	//Napisz program znajduj�cy minimaln� warto�� w tablicy n - elementowej, 
	//elementy tablicy s� losowane z przedzia�u[-23, 50].

	//int tabInt[20];

	//srand(time(NULL));

	//for (int i = 0; i < 20; i++)
	//{
	//	tabInt[i] = rand() % 73 - 23;
	//	printf("%d ", tabInt[i]);
	//}

	//int max = tabInt[0];
	//int min = tabInt[0];

	//for (int i = 1; i < 20; i++)
	//{
	//	if (tabInt[i] > max) max = tabInt[i];
	//	if (tabInt[i] < min) min = tabInt[i];
	//}

	//printf("\nnajmniejsza liczba z wylosowanych: %d \nnajwieksza liczba z wylosowanych: %d", min, max);

	//Zadanie 5. U�ytkownik podaje 2 pierwsze warto�ci tablicy.
	//Wype�nij pozosta�e kom�rki tablicy warto�ciami, kt�re stanowi� sum� warto�ci z dw�ch poprzedzaj�cych kom�rek tablicy
	//.np.: 3, 6, ? , ? , ? -> 3, 6, 9, 15, 24.


	//int tabInt[10];

	//printf("Podaj pierwsza wartosc w tablicy ");
	//scanf_s("%d", &tabInt[0]);
	//printf("Podaj druga wartosc w tablicy ");
	//scanf_s("%d", &tabInt[1]);

	//for (int i = 0; i < 10; i++)
	//{
	//	if (i > 1)
	//	{
	//		tabInt[i] = tabInt[i - 1] + tabInt[i - 2];
	//	}
	//	printf("%d ", tabInt[i]);
	//}

	//Zadanie 6. Dana jest tablica 20 elementowa.Pierwsza po�owa tablicy jest wype�niona.Napisz program,
	//kt�ry wype�ni drug� po�ow� tablicy poprzez kopiowanie kolejnych warto�ci z pierwszej po�owy tablicy.

	int tabInt[20];
	for (int i = 0; i < 10; i++)
	{
		printf("Podaj %d element tablicy ", i+1);
		scanf_s("%d", &tabInt[i]);
	}

	for (int i = 10; i < 20; i++)
	{
		tabInt[i] = tabInt[i - 10];
	}

	for (int i = 0; i < 20; i++)
	{
		printf("%d ", tabInt[i]);
	}

	return 0;
}