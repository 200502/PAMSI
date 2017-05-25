#ifndef DRZEWO_HH
#define DRZEWO_HH
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "IDrzewo.hh"
#include "Tablica.hh"
class Element
{
	public:
	int wartosc;
	Element *ojciec=NULL;
	Element *lewySyn=NULL;
	Element *prawySyn=NULL;
	
};
class Drzewo:public IDrzewo
{
	public:
	int i;
int rozmiar;
	int *tab;
	Element *srodek;
	void dodaj(Element* start);
	void run(int wielkosc);
	void wyswietlLewaGalaz(Element *start);
	void find(int liczba,Element *start);
	int pobierzWysokosc(Element *temp);
	int roznicaWysokosci(Element *temp);
	void ustawWysokosc(Element  *temp);
	Element* RR(Element* ojciec);
	Element* LL(Element* ojciec);
	Element* RL(Element* ojciec);
	Element* LR(Element* ojciec);
	Element* Balans(Element* temp); 
Drzewo(int wielkosc)
{
rozmiar=wielkosc;
srodek=new Element;
tab=new int[rozmiar];
i=1;
srand(time(0));
	
	for(int j=1;j<rozmiar;j++)
	{
	tab[j]=1+rand()%rozmiar;
	}
	tab[1]=1;
srodek->wartosc=(rozmiar/2)+1;
do
{
	dodaj(srodek);
	i++;
}while(i<rozmiar);



}

};
#endif
