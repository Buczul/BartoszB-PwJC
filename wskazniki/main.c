#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include "funkcje.h"


int main()
{
	////1. Napisz program, kt�ry:
	////� wypisze na ekran adres zadeklarowanej zmiennej,
	////� pobierze warto�� zmiennej, wypisze na ekran jej adres oraz warto��,
	////� przy u�yciu wska�nik�w obliczy r�nic� dw�ch liczb,
	////� przy u�yciu wska�nik�w obliczy �redni� trzech liczb,

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

	//// 2. Napisz program, w kt�rym zadeklarujesz tablic� a nast�pnie:
	////� Wypisz na ekran adres jej pierwszego elementu.
	////� Wypisz na ekran adres jej czwartego elementu.
	////� Napisz program, w kt�rym wylosujesz warto�ci do tablicy z przedzia�u podanego przez u�ytkownika i wypiszesz ich adresy.

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

	////3. Napisz program, w kt�rym wczytasz elementy tablicy, obliczysz ich �redni� oraz wpiszesz elementy wi�ksze od �redniej.

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

	////4. Napisz funkcj�, kt�ra podnosi podan� liczb� do kwadratu. Parametr do funkcji przeka� poprzez wska�nik.

	//int liczba;
	//printf("Podaj liczbe: ");
	//scanf("%d", &liczba);

	//kwadrat(&liczba);

	//printf("%d", liczba);

	////Napisz funkcj�, kt�ra umo�liwi policzenie podanej pot�gi dla podanej liczby. 
	////Parametry przeka� poprzez wska�nik.Funkcja powinna zwr�ci� wska�nik do wyniku.

	//int liczba1, potega1, wynik1;
	//printf("Podaj liczbe: ");
	//scanf("%d", &liczba1);
	//printf("Podaj potege: ");
	//scanf("%d", &potega1);

	//potega(&liczba1, &potega1, &wynik1);

	//printf("wynik: %d", wynik1);

	////Napisz funkcj�, kt�ra wypisuje podany znak podan� liczb� razy. Parametry przeka� poprzez wska�niki.
	////Na zako�czenie funkcja powinna zmniejsza� o 1, parametr odpowiadaj�cy za ilo�� powt�rze�

	//char znak = 'k';
	//int ile = 9;

	//powtorz(&znak, &ile);
	//printf("zmniejszona liczba powtorzen: %d", ile);

	////Napisz funkcj� otrzymuj�c� jako argumenty wska�niki do dw�ch zmiennych typu int, kt�ra:
	////� zwraca jako warto�� mniejsz� z liczb wskazywanych przez argumenty.
	////� zwraca jako warto�� wska�nik na zmienn� przechowuj�c� mniejsz� z liczb wskazywanych przez argumenty.

    //int a = 4;
	//int b = 3;

	//printf("wartosc: %d\n", mniejsza_wartosc(&a, &b));
	//printf("wskaznik: %d", mniejsza_wskaznik(&a, &b));

    ////Napisz funkcj� otrzymuj�c� jako argumenty referencje do dw�ch zmiennych typu int, kt�ra
    ////zamienia ze sob� warto�ci zmiennych, do kt�rych referencje dostali�my w argumentach.

    int w1 = 5, w2 = 9;
    printf("wartosc pierwsza: %d, wartosc druga: %d\n", w1, w2);
	zamiana(&w1, &w2);
	printf("wartosc pierwsza po zamianie: %d, wartosc druga po zamianie: %d", w1, w2);


	return 0;
}