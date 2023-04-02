
#include <stdio.h>
#include <string.h>

int main(void)
{
	char 	s1[40]  = "Dzień dobry! ", 
		s2[40]  = "Co słychać? ", 
		s3[40]  = "OK ",
		tmp[40],
		*ptr;
	
	printf("s1 = %s\ns2 = %s\ns3 = %s\n\v", s1, s2, s3);
	
	//konkatenacja, s2 wpisany po s1, na końcu NULL
	ptr = strcat(s1, s2);
	printf("Konkatenacja:\n%s\n\n", ptr);
	
	//odszukuje w łańcuchu s2 pierwsze wystąpienie znaku
	ptr = strchr(s2, ' ');
	if(ptr != NULL){
		printf("Odszukanie pierwszego znaku ' ': \n%s\n\n", ptr);
	}
	else
		printf("Nie znaleziono szukanego znaku. \n\n");
	
	//porównanie dwóch łańcuchów
	int cmp;
	cmp = strcmp(s1, s2);
	printf("Wynik porównania s1 i s2: %i\n", cmp);
	cmp = strcmp(s2, s2);
	printf("Wynik porównania s2 i s2: %i\n\n", cmp);
	
	//kopiowanie łańcucha s2 do s1
	printf("Zawartość s2: %s\n", s2);
	
	ptr = strcpy(tmp, s2);
	printf("Skopiowany łańcuch do tmp zawiera: %s\n", ptr);
	
	ptr = strcpy(tmp, s1);
	printf("Sprawdzam s1: %s\n", ptr);	
	
	//zlicza różne znaki
	int cspn;
	cspn = strcspn(s1, s2);
	printf("Liczba różnych znaków to: %i\n", cspn);
	
	return 0;
}
