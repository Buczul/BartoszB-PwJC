#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

int main()
{
	////1.Napisz program, w którym u¿ytkownik podaje liczby do momentu wpisania wartoœci mniejszej od 0,
	////po czym wyœwietla sumê, œredni¹ oraz wartoœæ maksymaln¹ dla wprowadzonych liczb.

	//int i = -1;
	//float liczba1=0, suma=0, max=0;

	//do
	//{
	//  printf("Podaj %d liczbe: ",i+2);
	//	suma += liczba1;
	//	if (liczba1 > max)max = liczba1;
	//	i++;
	//	scanf("%f", &liczba1);
	//} while (liczba1 >= 0);


	//if (i != 0) printf("Suma podanych liczb: %f\nSrednia podanych liczb: %f\nNajwieksza z podanych liczb: %f", suma, suma / i, max);
	//else printf("Nie podano zadnej liczby wiekszej badz rownej 0");

	////2.Napisz program, który pozwoli na wczytanie 10 liczb i wyznaczenie iloœci oraz
	////sumy liczb ujemnych i dodatnich podanych przez u¿ytkownika.

	//float liczba2, suma_dodatnich = 0, suma_ujemnych = 0;
	//int ilosc_dodatnich = 0, ilosc_ujemnych = 0;

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("Podaj %i liczbe: ", i + 1);
	//	scanf("%f", &liczba2);
	//	if (liczba2 > 0)
	//	{
	//		ilosc_dodatnich++;
	//		suma_dodatnich += liczba2;
	//	}
	//	else if (liczba2 < 0)
	//	{
	//		ilosc_ujemnych++;
	//		suma_ujemnych += liczba2;
	//	}
	//}
	//printf("Ilosc liczb dodatnich: %d\nSuma liczb dodatnich: %f\nIlosc liczb ujemnych: %d\nSuma liczb ujemnych: %f", ilosc_dodatnich, suma_dodatnich, ilosc_ujemnych, suma_ujemnych);

	////3.Dany jest ci¹g n liczb (n>0), napisz program pozwalaj¹cy na obliczenie sumy wszystkich liczb parzystych w danym ci¹gu.

	//int n;
	//int liczba3, suma_parzystych = 0;
	//printf("Podaj dlugosc ciagu: ");
	//scanf("%d", &n);

	//for (int i = 0; i < n; i++)
	//{
	//	printf("Podaj %d liczbe: ", i + 1);
	//	scanf("%d", &liczba3);
	//	if (liczba3 % 2 == 0) suma_parzystych += liczba3;
	//}
	//printf("Suma liczba parzystych ciagu: %d", suma_parzystych);

	////4.Wykorzystuj¹c algorytm z zadania 3, napisz program który pozwoli u¿ytkownikowi na wylosowanie n liczb
	////z przedzia³u(-10, 45) i obliczy sumê wszystkich liczb parzystych w danym ci¹gu.

    //int n1,liczba4, suma_parzystych1 = 0;
	//srand(time(NULL));
	//printf("Podaj ilosc liczb do wylosowania: ");
	//scanf("%d", &n1);

	//printf("Wylosowane liczby:\n");
	//for (int i = 0; i < n1; i++)
	//{
	//	liczba4 = rand() % 56 - 10;
	//	printf("%d\n", liczba4);
	//	if (liczba4 % 2 == 0) suma_parzystych1 += liczba4;
	//}
	//printf("Suma liczba parzystych ciagu: %d", suma_parzystych1);

	////5.Grupa laboratoryjna sk³ada siê z n studentów (wartoœæ n podaje u¿ytkownik). Wprowadzamy liczbê punktów dla ka¿dego studenta.
	////Napisz program, który obliczy œredni¹ liczbê punktów w grupie z wykorzystaniem pêtli while.

	//int liczba_studentow, punkty, suma_punktow = 0;

	//printf("Podaj liczbe studentow w grupie: ");
	//scanf("%d", &liczba_studentow);

	//printf("Wprowadz liczbe punktow dla kazdego studenta\n");
	//int i1 = 0;
	//while (i1 < liczba_studentow)
	//{
	//	printf("student %d: ", i1+1);
	//	scanf("%d", &punkty);
	//	suma_punktow += punkty;
	//	i1++;
	//}
	//printf("srednia liczba punktow w grupie: %f", 1.0*suma_punktow / liczba_studentow);

	////6.Za pomoc¹ pêtli for wypisz na ekranie ci¹gi liczb:
	////• 1, 2, 3, ..., 99, 100
	////• 100, 99, ..., 2, 1, 0
	////• 7, 14, 21, ..., 70, 77
	////• 20, 18, ..., 2, 0

    //for (int i = 1; i <= 100; i++)
    //{
	//	printf("%d, ", i);
	//}
	//printf("------- ");
	//for (int i = 100; i >= 0; i--)
	//{
	//	printf("%d, ", i);
	//}
	//printf("------- ");
	//for (int i = 7; i <= 77; i+=7)
	//{
	//	printf("%d, ", i);
	//}
	//printf("------- ");
	//for (int i = 20; i >= 0; i-=2)
	//{
	//	printf("%d, ", i);
	//}
    
    ////7.W oparciu o podany fragment kodu, zmodyfikuj kod tak aby uzyskaæ nastêpuj¹ce rezultaty:
    int i, j;
    for (i = 0; i < 10; i++) 
	{
    	for (j = 0; j <= i; j++) printf("X");
    	printf("\n");
    }

	printf("-----------\n");

	for (i = 10; i > 0; i--) 
	{
		for (j = i; j > 0; j--) printf("X");
		printf("\n");
	}

	printf("-----------\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > i; j--) printf(" ");
		for (j = 0; j <= i; j++) printf("X");
		printf("\n");
	}

	printf("-----------\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++) printf(" ");
		for (j = 10; j > i; j--) printf("X");
		printf("\n");
	}

	printf("-----------\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > i; j--) printf(" ");
		for (j = 0; j <= i; j++) printf("X");
		for (j = 0; j <= i; j++) printf("X");
		printf("\n");
	}

	return 0;
}