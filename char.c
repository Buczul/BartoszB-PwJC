#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	////Zadanie 2. W j�zyku C ka�demu znakowi alfanumerycznemu odpowiada kod liczbowy nazywany
	////kodem ASCII.Napisz program, kt�ry wypisze �fragment� tablicy ASCII, czyli warto�ci kod�w
	////znak�w od �a� do �z�, od �A� do �Z� oraz od �0� do �9�

	//char male_litery[23] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','w','y','z' };
	//char wielkie_litery[23] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','R','S','T','U','W','Y','Z' };
	//char cyfry[10] = { '1','2','3','4','5','6','7','8','9','0' };

	//for (int i = 0; i < 10; i++)
	//{
	//	printf_s("%c - %d\n", cyfry[i], int(cyfry[i]));
	//}

	//for (int i = 0; i < 23; i++)
	//{
	//	printf_s("%c - %d\n", wielkie_litery[i], int(wielkie_litery[i]));
	//}

	//for (int i = 0; i < 23; i++)
	//{
	//	printf_s("%c - %d\n",male_litery[i], int(male_litery[i]));
	//}

	////Zadanie 3. Napisz program sprawdzaj�cy ile jest sp�g�osek i samog�osek we wprowadzonym tek�cie.

	//char tekst[] = "przykladowy tekst do zadania";

	//int len = 0;
	//int samogloski = 0;
	//int spolgloski = 0;
	//while (tekst[len] != '\0')
	//{
	//	if (tekst[len] == 'a' || tekst[len] == 'e' || tekst[len] == 'y' || tekst[len] == 'u' || tekst[len] == 'i' || tekst[len] == 'o') samogloski++;
	//	else if (tekst[len] == ' ');
	//	else spolgloski++;

	//	len++;
	//}

	//printf("samogloski: %d, spolgloski: %d", samogloski, spolgloski);

	////Zadanie 4. Napisz program, kt�ry wypisuje strumie� wej�ciowy w odwrotnej kolejno�ci, zamieniaj�c
	////ma�e litery na du�e.

	//char tekst[] = "Przykladowy tekst";
	//int tekstInt[50];

	//int len = 0;
	//while (tekst[len] != '\0')
	//{
	//	if (int(tekst[len]) <= 90 && int(tekst[len]) >= 65) tekstInt[len] = int(tekst[len]) + 32;
	//	else if (int(tekst[len]) >= 97 && int(tekst[len]) <= 122) tekstInt[len] = int(tekst[len]) - 32;

	//	if (tekst[len] != ' ') tekst[len] = char(tekstInt[len]);

	//	len++;
	//}

	//printf_s("%s", tekst);

	////Zadanie 5. Napisz program, kt�ry wczytuje jedn� dodatni� liczb� ca�kowit� i wypisuje s�owami jej
	////cyfry.

	//char liczba[20];

	//printf("Podaj liczbe ");
	//gets_s(liczba);
	//int len = 0;

	//printf("%s - ", liczba);
	//while (liczba[len] != '\0')
	//{
	//	switch (liczba[len])
	//	{
	//	case '0': printf("zero ");
	//		break;
	//	case '1': printf("jeden ");
	//		break;
	//	case '2': printf("dwa ");
	//		break;
	//	case '3': printf("trzy ");
	//		break;
	//	case '4': printf("cztery ");
	//		break;
	//	case '5': printf("piec ");
	//		break;
	//	case '6': printf("szesc ");
	//		break;
	//	case '7': printf("siedem ");
	//		break;
	//	case '8': printf("osiem ");
	//		break;
	//	case '9': printf("dziewiec ");
	//		break;
	//	default:
	//		break;
	//	}

	//	len++;
	//}

	////Zadanie 6. Mamy dwa ci�gi znak�w : s1 = "abcdefghijklmnopqrstuvwxyz", s2 = "zyxwvutsrqponmlkjihgfedcba".
	////Napisz program, kt�ry ka�dej literze ci�gu wej�ciowego znalezionej na pozycji n w ci�gu s1 przypisuje
	////odpowiadaj�c� jej liter� z ci�gu s2 na pozycji n, natomiast nie znalezione znaki wypisuje bez zmian

	//char s1[] = "abcdefghijklmnopqrstuvwxyz";
	//char s2[] = "zyxwvutsrqponmlkjihgfedcba";

	//char tekst[50];

	//printf("Podaj tekst ");
	//gets_s(tekst);

	//int len = 0;
	//while (tekst[len] != '\0')
	//{
	//	for (int i = 0; i < 26; i++)
	//	{
	//		if (tekst[len] == s1[i])
	//		{
	//		     tekst[len] = s2[i];
	//			 i = 26;
	//		}
	//	}

	//	len++;
	//}


	//printf("Przerobiony tekst: %s", tekst);


	return 0;
}