#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main()
{
	////Napisz program wprowadzaj�cy do 10-elementowej tablicy warto�ci: 3, 6, 9, ... 

	//int tab1[10];
	//int a1 = 3;
	//for (int i = 0; i < 10; i++)
	//{
	//	tab1[i] = a1;
	//	printf("%d\n", a1);
	//	a1 += 3;
	//}

	////Do programu z zadania 1 dodaj instrukcje wy�wietlaj�ce co drug� warto�� z tablicy.

	//int tab1[10];
	//int a1 = 3;
	//for (int i = 0; i < 10; i++)
	//{
	//	tab1[i] = a1;
	//	a1 += 3;
	//}
	//for (int i = 0; i < 10; i+=2)
	//{
	//	printf("%d\n", tab1[i]);
	//}

	////Wype�nij n-elementow� tablic�, zaczynaj�c od ostatniej kom�rki tablicy,
	////warto�ciami a, a-5, a-10, ... . Warto�� ca�kowit� a podaje u�ytkownik.

	//int tab2[14];
	//int a2;

	//printf("Podaj wartosc a: ");
	//scanf("%d", &a2);

	//for (int i = ((sizeof(tab2) / 4)-1); i >= 0; i--)
	//{
	//	tab2[i] = a2;
	//	a2 -= 5;
	//}
	//for (int i = 0; i < (sizeof(tab2) / 4); i++)
	//{
	//	printf("%d\n", tab2[i]);
	//}

	////Napisz program znajduj�cy minimaln� warto�� w tablicy n-elementowej,
	////elementy tablicy s� losowane z przedzia�u[-23, 50].

	//srand(time(NULL));
	//int min = 50;

	//int tab3[11];
	//for (int i = 0; i < (sizeof(tab3) / 4); i++)
	//{
	//	tab3[i] = rand() % 74 - 23;
	//	printf("%d\n", tab3[i]);
	//}
	//for (int i = 0; i < (sizeof(tab3) / 4); i++)
	//{
	//	if (tab3[i] < min) min = tab3[i];
	//}
	//printf("Najmniejsza wartosc z tablicy to %d", min);
	
	////U�ytkownik podaje 2 pierwsze warto�ci tablicy. Wype�nij pozosta�e kom�rki tablicy warto�ciami,
	////kt�re stanowi� sum� warto�ci z dw�ch poprzedzaj�cych kom�rek tablicy.np.: 3, 6, ? , ? , ? -> 3, 6, 9, 15, 24.

	//int tab4[15];
	//printf("Podaj 2 pierwsze wartosci do tablicy\nWartosc 1: ");
	//scanf("%d", &tab4[0]);
	//printf("Wartosc 2: ");
	//scanf("%d", &tab4[1]);
	//
	//for (int i = 2; i < (sizeof(tab4) / 4); i++)
    //{
	//	tab4[i] = tab4[i - 1] + tab4[i - 2];
    //}
	//for (int i = 0; i < (sizeof(tab4) / 4); i++)
    //{
    //	printf("%d\n", tab4[i]);
    //}

	////Dana jest tablica 20 elementowa. Pierwsza po�owa tablicy jest wype�niona. 
	////Napisz program, kt�ry wype�ni drug� po�ow� tablicy poprzez kopiowanie kolejnych warto�ci z pierwszej po�owy tablicy.

	//int tab5[20];
	//srand(time(NULL));
	//for (int i = 0; i < 10; i++)
	//{
	//	tab5[i] = rand()%100;
	//	tab5[i + 10] = tab5[i];
	//}
	//for (int i = 0; i < 20; i++)
	//{
	//	printf("%d\n", tab5[i]);
	//}

	////Napisz program obliczania sumy element�w przek�tnej g��wnej macierzy.

	//int macierz[4][4];
	//srand(time(NULL));
	//for (int i = 0; i < 4; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		macierz[i][j] = rand() % 10;
	//	}
	//}
	//printf("%d %d %d %d\n", macierz[0][0], macierz[0][1], macierz[0][2], macierz[0][3]);
	//printf("%d %d %d %d\n", macierz[1][0], macierz[1][1], macierz[1][2], macierz[1][3]);
	//printf("%d %d %d %d\n", macierz[2][0], macierz[2][1], macierz[2][2], macierz[2][3]);
	//printf("%d %d %d %d\n", macierz[3][0], macierz[3][1], macierz[3][2], macierz[3][3]);

	//int suma = 0;
	//for (int i = 0; i < 4; i++)
	//{
	//	suma += macierz[i][i];
	//}

	//printf("suma elementow glownej przekatnej macierzy to %d", suma);

    ////Napisz program dodawania dw�ch macierzy.

    int macierz1[3][3];
	int macierz2[3][3];
	int macierz3[3][3];
	srand(time(NULL));
	for (int i = 0; i < 3; i++)
    {
    	for (int j = 0; j < 3; j++)
    	{
    		macierz1[i][j] = rand() % 5;
    	}
    }
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			macierz2[i][j] = rand() % 5;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			macierz3[i][j] = (macierz1[i][j] + macierz2[i][j]);
		}
	}
	printf("%d %d %d\n", macierz1[0][0], macierz1[0][1], macierz1[0][2]);
    printf("%d %d %d\n", macierz1[1][0], macierz1[1][1], macierz1[1][2]);
    printf("%d %d %d\n", macierz1[2][0], macierz1[2][1], macierz1[2][2]);
	printf("\n  +\n\n");
	printf("%d %d %d\n", macierz2[0][0], macierz2[0][1], macierz2[0][2]);
	printf("%d %d %d\n", macierz2[1][0], macierz2[1][1], macierz2[1][2]);
	printf("%d %d %d\n", macierz2[2][0], macierz2[2][1], macierz2[2][2]);
	printf("\n  =\n\n");
	printf("%d %d %d\n", macierz3[0][0], macierz3[0][1], macierz3[0][2]);
	printf("%d %d %d\n", macierz3[1][0], macierz3[1][1], macierz3[1][2]);
	printf("%d %d %d\n", macierz3[2][0], macierz3[2][1], macierz3[2][2]);

	return 0;
}