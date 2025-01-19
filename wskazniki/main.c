#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include "funkcje.h"


int main()
{
	////1. Napisz program, który:
	////• wypisze na ekran adres zadeklarowanej zmiennej,
	////• pobierze wartoœæ zmiennej, wypisze na ekran jej adres oraz wartoœæ,
	////• przy u¿yciu wskaŸników obliczy ró¿nicê dwóch liczb,
	////• przy u¿yciu wskaŸników obliczy œredni¹ trzech liczb,

	//int zmienna1 = 123;
	//int zmienna2 = 987;
	//int zmienna3 = 456;
	//printf("adres zadeklarowanej zmiennej: %d\n", &zmienna1);
	//int* wskaznik1, * wskaznik2, * wskaznik3;
	//wskaznik1 = &zmienna1;
	//wskaznik2 = &zmienna2;
	//wskaznik3 = &zmienna3;
	//printf("adres zmiennej: %d, wartosc zmiennej: %d\n", wskaznik1, *wskaznik1);
	//printf("Roznica dwoch zmiennych: %d\n", *wskaznik1 - *wskaznik2);
	//printf("Srednia trzech zmiennych: %d", (*wskaznik1 + *wskaznik2 + *wskaznik3) / 3);

	//// 2. Napisz program, w którym zadeklarujesz tablicê a nastêpnie:
	////• Wypisz na ekran adres jej pierwszego elementu.
	////• Wypisz na ekran adres jej czwartego elementu.
	////• Napisz program, w którym wylosujesz wartoœci do tablicy z przedzia³u podanego przez u¿ytkownika i wypiszesz ich adresy.

	//srand(time(NULL));
	//int tab[] = {1,2,3,4,5};
	//int* wsk;
	//wsk = &tab;

	//printf("Adres pierwszego elementu tablicy: %d\n", wsk);
	//printf("Adres czwartego elementu tablicy: %d\n", wsk+3);

	//int tab1[10];
	//int* wsk1;
	//wsk1 = &tab1;
	//int przedzial1, przedzial2;
	//printf("Podaj przedzial z ktorego chcesz wylosowac liczby\nod: ");
	//scanf("%d", &przedzial1);
	//printf("do: ");
	//scanf("%d", &przedzial2);
	//for (int i = 0; i < 10; i++)
	//{
	//	*(wsk1 + i) = rand() % (przedzial2 - przedzial1 + 1) + przedzial1;
	//	printf("wylosowana wartosc: %d, jej adres: %d\n", *(wsk1 + i), wsk1 + i);
	//}

	////3. Napisz program, w którym wczytasz elementy tablicy, obliczysz ich œredni¹ oraz wpiszesz elementy wiêksze od œredniej.

	//int tab2[10];
	//int* wsk2;
	//wsk2 = &tab2;
	//int suma=0;

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("Wpisz wartosc do %d elementu tablicy: ", i+1);
	//	scanf("%d", wsk2 + i);
	//	suma += *(wsk2 + i);
	//}

	//printf("Srednia wartosc elementu tablicy: %d\n", suma/10);

	//for (int i = 0; i < 10; i++)
	//{
	//	if (*(wsk2 + i) > suma / 10) printf("element %d jest wiekszy od sredniej\n", i+1, *(wsk2 + i));
	//}

	////4. Napisz funkcjê, która podnosi podan¹ liczbê do kwadratu. Parametr do funkcji przeka¿ poprzez wskaŸnik.

	//int liczba;
	//printf("Podaj liczbe: ");
	//scanf("%d", &liczba);

	//kwadrat(&liczba);

	//printf("%d", liczba);

	////Napisz funkcjê, która umo¿liwi policzenie podanej potêgi dla podanej liczby. 
	////Parametry przeka¿ poprzez wskaŸnik.Funkcja powinna zwróciæ wskaŸnik do wyniku.

	//int liczba1, potega1, wynik1;
	//printf("Podaj liczbe: ");
	//scanf("%d", &liczba1);
	//printf("Podaj potege: ");
	//scanf("%d", &potega1);

	//potega(&liczba1, &potega1, &wynik1);

	//printf("wynik: %d", wynik1);

	////Napisz funkcjê, która wypisuje podany znak podan¹ liczbê razy. Parametry przeka¿ poprzez wskaŸniki.
	////Na zakoñczenie funkcja powinna zmniejszaæ o 1, parametr odpowiadaj¹cy za iloœæ powtórzeñ

	//char znak = 'k';
	//int ile = 9;

	//powtorz(&znak, &ile);
	//printf("zmniejszona liczba powtorzen: %d", ile);

	////Napisz funkcjê otrzymuj¹c¹ jako argumenty wskaŸniki do dwóch zmiennych typu int, która:
	////• zwraca jako wartoœæ mniejsz¹ z liczb wskazywanych przez argumenty.
	////• zwraca jako wartoœæ wskaŸnik na zmienn¹ przechowuj¹c¹ mniejsz¹ z liczb wskazywanych przez argumenty.

    //int a = 4;
	//int b = 3;

	//printf("wartosc: %d\n", mniejsza_wartosc(&a, &b));
	//printf("wskaznik: %d", mniejsza_wskaznik(&a, &b));

    ////Napisz funkcjê otrzymuj¹c¹ jako argumenty referencje do dwóch zmiennych typu int, która
    ////zamienia ze sob¹ wartoœci zmiennych, do których referencje dostaliœmy w argumentach.

    int w1 = 5, w2 = 9;
    printf("wartosc pierwsza: %d, wartosc druga: %d\n", w1, w2);
	zamiana(&w1, &w2);
	printf("wartosc pierwsza po zamianie: %d, wartosc druga po zamianie: %d", w1, w2);


	return 0;
}