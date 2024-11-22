#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	////Zadanie 1. Napisz program wprowadzający do 10 - elementowej tablicy wartości : 3, 6, 9, ...

	//int tabInt[10];
	//int a = 3;

	//for (int i = 0; i < 10; i++)
	//{
	//	tabInt[i] = a;
	//	a += 3;
	//	
	//	printf("%d\n",tabInt[i]);
	//}

	////Zadanie 2. Do programu z zadania 1 dodaj instrukcje wyświetlające co drugą wartość z tablicy

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

	////Zadanie 3. Wypełnij n-elementową tablicę, zaczynając od ostatniej komórki tablicy,
	////wartościami a, a5, a-10, ... . Wartość całkowitą a podaje użytkownik.

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

	////Zadanie 4. Napisz program znajdujący minimalną wartość w tablicy n - elementowej, 
	////elementy tablicy są losowane z przedziału[-23, 50].

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

	////Zadanie 5. Użytkownik podaje 2 pierwsze wartości tablicy.
	////Wypełnij pozostałe komórki tablicy wartościami, które stanowią sumę wartości z dwóch poprzedzających komórek tablicy
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

	////Zadanie 6. Dana jest tablica 20 elementowa.Pierwsza połowa tablicy jest wypełniona.Napisz program,
	////który wypełni drugą połowę tablicy poprzez kopiowanie kolejnych wartości z pierwszej połowy tablicy.

	//int tabInt[20];
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("Podaj %d element tablicy ", i+1);
	//	scanf_s("%d", &tabInt[i]);
	//}

	//for (int i = 10; i < 20; i++)
	//{
	//	tabInt[i] = tabInt[i - 10];
	//}

	//for (int i = 0; i < 20; i++)
	//{
	//	printf("%d ", tabInt[i]);
	//}

	////Zadanie 7. Napisz program obliczania sumy elementów przekątnej głównej macierzy.

    //int tabInt[4][4] = { 15,-42,65,-12,7,10,48,2,-57,85,32,3,32,99,-25,18 };
    //
    //int suma = 0;
    //for (int i = 0; i < 4; i++)
    //{
    //	suma += tabInt[i][i];
    //}
    //printf("suma elementow przkatnej glownej: %d", suma);

    ////Zadanie 8. Napisz program dodawania dwóch macierzy.

    //int tab1[3][3] = { -1,2,-3,4,-5,6,-7,8,-9 };
    //int tab2[3][3] = { 9,-1,8,-2,7,-3,6,-4,6 };
    //int tabsuma[3][3];
    //
    //for (int i = 0; i < 3; i++)
    //{
    //	for (int j = 0; j < 3; j++)
    //	{
    //		tabsuma[i][j] = tab1[i][j] + tab2[i][j];
    //	}
    //}
    //
    //for (int i = 0; i < 3; i++)
    //{
    //	for (int j = 0; j < 3; j++)
    //	{
    //		printf("%d ", tabsuma[i][j]);
    //	}
    //	printf("\n");
    //}

	return 0;
}
