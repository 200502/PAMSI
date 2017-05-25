#ifndef TABHASH_HH
#define TABHASH_HH
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "ITabAso.hh"
#include "Tablica.hh"
#include <string>
class Element
{
	public:
	std::string klucz;
	int wartosc;
	Element *nastepny=NULL;
};
class TabHash:public ITabAso
{
	public:
	Element *tab;
	std::string *tablica;
	std::string slowoSzukane;
	int rozmiar;
	Element dodajElement(std::string klucz, int wartosc);
	void hash(Element element,int rozmiar);
	void zainicjujTablice();
	Element* find(std::string szukany, int rozmiar);
	void run(int rozmiar);
	Element zwrocElement(int indeks){return tab[indeks];}
	void stworzTabliceStringow(int rozmiar);
~TabHash()
{
	delete tab;
	delete tablica;
}
TabHash(int rozmiar)
{	
	rozmiar=rozmiar;
	srand(time(0));
	tab=new Element[rozmiar];
	zainicjujTablice();
	stworzTabliceStringow(rozmiar);
	for(int i=0;i<rozmiar;i++){
	hash(dodajElement(tablica[1+rand()%rozmiar],i),rozmiar);
	}
}
};
#endif
