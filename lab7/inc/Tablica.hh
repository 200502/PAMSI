#ifndef TABLICA_HH
#define TABLICA_HH
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "ITablica.hh"
class Tablica:public ITablica
{
public:
int *tab;
int rozmiar;
void stworz(int rozmiar);
void wypelnij(int);
void wyswietl(int);
void run(int rozmiar);
Tablica(int rozmiar)
{
tab=new int[rozmiar];
  	rozmiar=rozmiar;
srand(time(0));
	for(int i=0;i<rozmiar;i++)
	{
	tab[i]=1+rand()%70;
	}
}
~Tablica()
{
delete[]tab;
}
};
#endif
