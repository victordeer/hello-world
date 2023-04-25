//Program liczacy sume cyfr liczby calkowitej
//Dodatkowy komentarz - modyfikacja z 25.04.2023

#include<stdio.h>

int main(void)
{
	int number, sumaCyfr;

	printf("PROGRAM LICZY SUME CYFR LICZBY CALKOWITEJ\n\n");
	printf("Liczba calkowita: ");
	scanf_s("%i", &number);

	while (number < 0)					//Zmiana znaku jezeli liczba n bedzie ujemna
		number *= -1;

	sumaCyfr = 0;
	while (number != 0)
	{
		sumaCyfr += (number % 10);		//Dodanie wyniku z modulo n przez 10 do saumaCyfr
		number /= 10;					//Podzielenie calkowitoliczbowo n przez 10
	}

	printf("Suma jej cyfr to: %i\n", sumaCyfr);

	return 0;
}
