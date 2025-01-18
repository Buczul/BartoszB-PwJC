#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	////Napisz program, w którym zaprezentujesz u¿ycie obiektu klasy std::string w celu inicjalizacji, 
	////przechowywania danych wejœciowych u¿ytkownika oraz kopiowania, ³¹czenia i okreœlenia d³ugoœci ci¹gu tekstowego.

	//char ciag_znakow[] = "jezyk c ";//inicjalizacja ciagu znakow o zawarotsci "jezyk c "
	//char s1[30];//inicjalizacja zmiennej dla ciagu znakow o maksymalnej dlugosci 20 znakow
	//strcpy(s1, ciag_znakow);//przekopiowywanie danych z zmiennej ciag_znakow do zmiennej s1
	//char s2[30];
	//gets(s2);//wprowadzanie przez uzytkownika calej linii, razem ze spacjami do zmiennej s2 
	//strcat(s1, s2);//do³¹czenie s2 do s1
	//printf_s("\nwynik:%s \n", s1);
	//int len = 0;
	//for (int i = 0; i < s1[i]; i++)//iteracja ktora zlicza liczbe znakow w ciagu
	//{
	//	len++;
	//}
	//printf("Dlugosc ciagu znakow: %d", len);

	////W jêzyku C ka¿demu znakowi alfanumerycznemu odpowiada kod liczbowy nazywany kodem ASCII.
	////Napisz program, który wypisze „fragment” tablicy ASCII, czyli wartoœci kodów znaków od ‘a’ do ‘z’, od ‘A’ do ‘Z’ oraz od ‘0’ do ‘9’

	//char male_litery[] = "abcdefghijklmnoprqstuvwxyz";
	//char wielkie_litery[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	//for (int i = 0; i < male_litery[i]; i++) printf("%c - %d\n", male_litery[i], i+97);
	//for (int i = 0; i < wielkie_litery[i]; i++) printf("%c - %d\n", wielkie_litery[i], i+65);
	//for (int i = 0; i < 10; i++) printf("%d - %d\n", i, i);

	////Napisz program sprawdzaj¹cy ile jest spó³g³osek i samog³osek we wprowadzonym tekœcie.

	//char tekst[50];
	//int samogloski = 0;
	//int spolgloski = 0;

	//printf("Wprowadz tekst: ");
	//gets(tekst);
	//for (int i = 0; i < tekst[i]; i++)
	//{
	//	if (tekst[i] == 'a' || tekst[i] == 'e' || tekst[i] == 'y' || tekst[i] == 'u' || tekst[i] == 'i' || tekst[i] == 'o') samogloski++;
	//	else if (tekst[i] == ' ');
	//	else spolgloski++;
	//}
	//printf("liczba samoglosek: %d\n", samogloski);
	//printf("liczba spolglosek: %d", spolgloski);

	////Napisz program, który wypisuje strumieñ wejœciowy w odwrotnej kolejnoœci, zamieniaj¹c ma³e litery na du¿e.Przyk³ad: Test TEST

	//char tekst1[50];

	//printf("Podaj tekst: ");
	//gets(tekst1);
	//
	//for (int i = 0; i < tekst1[i]; i++)
	//{
	//	if (tekst1[i] >= 'a' && tekst1[i] <= 'z') tekst1[i]-=32;
	//}

	//printf("%s", tekst1);

	////Napisz program, który wczytuje jedn¹ dodatni¹ liczbê ca³kowit¹ i wypisuje s³owami jej cyfry.Przyk³ad: 0->zero 928->dziewiêæ dwa osiem.

	//char abc[20];

	//printf("Podaj liczbe calkowita: ");
	//gets(abc);

	//printf("%s -> ", abc);
	//for (int i = 0; i < abc[i]; i++)
	//{
	//	switch (abc[i])
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
	//}








	////Mamy dwa ci¹gi znaków: s1="abcdefghijklmnopqrstuvwxyz", s2="zyxwvutsrqponmlkjihgfedcba". 
	////Napisz program, który ka¿dej literze ci¹gu wejœciowego znalezionej na pozycji n w ci¹gu s1 
	////przypisuje odpowiadaj¹c¹ jej literê z ci¹gu s2 na pozycji n, natomiast nie znalezione znaki wypisuje bez zmian.


	char s1[] = "abcdefghijklmnopqrstuvwxyz";
	char s2[] = "zyxwvutsrqponmlkjihgfedcba";
	char napis[50];



	printf("Podaj tekst: ");
	gets(napis);

	int i = 0;
	while(napis[i] != '\0')
	{
		if (napis[i] >= 'a' && napis[i] <= 'z')
		{
			for (int j = 0; j < s1[j]; j++)
			{
				if (napis[i] == s1[j])
				{
					napis[i] = s2[j];
					break;
				}
			}
		}
		i++;
	}

	printf("zakodowany napis: %s", napis);


	return 0;
}