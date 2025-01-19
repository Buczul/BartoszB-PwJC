#include <stdio.h>
#include <stdlib.h>
#include "funkcje.h"

void kwadrat(int* n)
{
	*n = (*n) * (*n);
}

void potega(int* liczba, int* potega, int* wynik)
{
	*wynik = *liczba;
	for (int i = 1; i < *potega; i++)
	{
		*wynik = (*wynik) * (*liczba);
	}
}

void powtorz(char* znak, int* ile_razy)
{
	for (int i = 0; i < *ile_razy; i++)
	{
		printf("%c", *znak);
	}
	printf("\n");
	*ile_razy = *ile_razy - 1;
}

int mniejsza_wartosc(int* pierwsza, int* druga)
{
	if (*pierwsza > *druga) return *druga;
	else return *pierwsza;
}

int mniejsza_wskaznik(int* pierwsza, int* druga)
{
	if (*pierwsza > *druga) return druga;
	else return pierwsza;
}

void zamiana(int* a, int* b)
{
	int pom = (*a);
	(*a) = (*b);
	(*b) = pom;
}
