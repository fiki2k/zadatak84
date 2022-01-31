// Program treba izracunat posotak  ocjena iz n predmeta.

#include<stdio.h>

	int main()
{
	int ocjene[20],n, i;
	printf("Koliko predmeta zelis unijeti:");
	scanf("%d",&n);
	float sum=0, postotak, prosjek;
    printf("Unesi ocjene iz n predmeta:");
	for(i=0; i<n; i++)
	{
	 scanf("%d",&ocjene[i]);
	 sum=sum+ocjene[i];
	}
	// Racunanje postotka i prosjeka.
	prosjek=sum/n ;
	postotak=prosjek*100;
	// Ispis prosjeka i postotka.
	printf("Prosjek ocjena je: %f",prosjek);
	printf("\nPostotak ocjena je: %f%",postotak);
	return 0;
}
