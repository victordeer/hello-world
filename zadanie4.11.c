//Program liczacy sum� cyfr liczby ca�kowitej

#include<stdio.h>

int main(void)
{
	int number, sumaCyfr;

	printf("PROGRAM LICZY SUME CYFR LICZBY CALKOWITEJ\n\n");
	printf("Liczba calkowita: ");
	scanf_s("%i", &number);

	while (number < 0)					//Zmiana znaku je�li liczba n b�dzie ujemna
		number *= -1;

	sumaCyfr = 0;
	while (number != 0)
	{
		sumaCyfr += (number % 10);		//Dodanie wyniku z modulo n przez 10 do saumaCyfr
		number /= 10;					//Podzielenie ca�kowitoliczbowo n przez 10
	}

	printf("Suma jej cyfr to: %i\n", sumaCyfr);

	return 0;
}