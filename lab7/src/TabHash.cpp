#include "TabHash.hh"
#include <cstdlib>
#include <time.h>
#include <string>
char losujZnak()
{
	return (char)(rand()%24)+65;
}
std::string stworzSlowo()
{
	std::string slowo;
	for(int i=0;i<7;i++){
	slowo+=losujZnak();
	}
return slowo;
}
int stringNaInt(std::string wyraz)
{	
	int iStr=1;
	 for(int i=1;i<(int)wyraz.size();i++)
    {
     iStr = 10*iStr+wyraz[i]-48;
	}
return iStr;
}
void TabHash::stworzTabliceStringow(int rozmiar)
{
	tablica=new string[rozmiar];
	for(int i=0;i<rozmiar;i++){
	tablica[i]=stworzSlowo();
	}
	slowoSzukane=tablica[1+rand()%rozmiar];
}
Element TabHash::dodajElement(std::string klucz, int wartosc)
{

Element nowy;
nowy.klucz=klucz;
nowy.wartosc=wartosc;
return nowy;
}
void TabHash::zainicjujTablice()
{
Element zero;
zero.klucz="brak";
zero.wartosc=0;
zero.nastepny=NULL;
for(int i=0;i<rozmiar;i++)
	{
	tab[i]=zero;
	}
}
void TabHash::hash(Element element,int rozmiar)
{	
	int iStr=stringNaInt(element.klucz);
	int indeks=iStr%rozmiar;
	if(tab[indeks].nastepny==NULL){
		tab[indeks]=element;
	}
	else {
		Element *temp=new Element;
		temp=&tab[indeks];
		do{
		temp=temp->nastepny;
		}while(temp->nastepny==NULL);
		temp->nastepny=&tab[indeks];
	}
}
Element* TabHash::find(std::string szukany,int rozmiar)
{	
	int iStr=stringNaInt(szukany);
	int indeks=iStr%rozmiar;
	Element *temp=new Element;
		temp=&tab[indeks];
	if(temp->klucz==szukany){
		return temp;
	}
	else {
		do{
		temp=temp->nastepny;
		}while(temp->klucz==szukany);
		return temp;
	}
}
void TabHash::run(int rozmiar)
{
	find(slowoSzukane,rozmiar);
}
