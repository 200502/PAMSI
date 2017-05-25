#include "Drzewo.hh"
int Drzewo::roznicaWysokosci(Element *temp)
{
	int wysLewegoSyna=pobierzWysokosc(temp->lewySyn);
	int wysPrawegoSyna=pobierzWysokosc(temp->prawySyn);
	int roznica=(wysLewegoSyna-wysPrawegoSyna);

return roznica;
}
int Drzewo::pobierzWysokosc(Element *temp)
{
	int wysokosc=0;	
	if(temp){
	int lewePoddrzewo=pobierzWysokosc(temp->lewySyn);
	int prawePoddrzewo=pobierzWysokosc(temp->prawySyn);
	wysokosc=std::max(lewePoddrzewo,prawePoddrzewo);
	}
return wysokosc; 
}

void Drzewo::dodaj(Element *start)
{
	Element * w;
	w=new Element;
		if(tab[i]<=start->wartosc)
		{
			if(start->lewySyn==NULL)
				{	
					w->wartosc=tab[i];
					start->lewySyn=w;
					w->ojciec=start;
					start=Balans(start);
				}   
			else dodaj(start->lewySyn);	
		}
		else if(tab[i]>start->wartosc)
		{		
			if(start->prawySyn==NULL)
				{
					w->wartosc=tab[i];
					start->prawySyn=w;
					w->ojciec=start;
					start=Balans(start);
				}
				else dodaj(start->prawySyn);
		}		
}
Element* Drzewo::Balans(Element* temp) {
  int bf = roznicaWysokosci(temp);
	if (bf > 1) 
	{
    	if (roznicaWysokosci (temp->lewySyn) > 0)
		{
    	temp = LL(temp);
	    }
		else
		{
		temp = LR(temp);
		}
	}
	else if (bf < -1) 
	{
    	if (roznicaWysokosci(temp->prawySyn) > 0)
		{
		temp = RL(temp);        
		} 
		else
		{
		temp = RR(temp);
		}
	}
  return temp;
}
void Drzewo::run(int rozmiar)
{

find(1,srodek);
}

void Drzewo::wyswietlLewaGalaz(Element *start)
{
do{

	std::cout<<start->wartosc<<std::endl;
	start=start->lewySyn;
	
}while(start->lewySyn!=NULL);
}
void Drzewo::find(int liczba, Element *start)
{
	if(liczba==start->wartosc)
	{
	std::cout<<"znaleziono, ta liczba to "<<start->wartosc<<std::endl;
	}
	else if (liczba<start->wartosc)
	{
	if(start->lewySyn!=NULL)
	{
	find(liczba,start->lewySyn);
	}
	else
	std::cout<<"nie ma takiej liczby"<<std::endl;
	}
	else if(liczba>start->wartosc)
	{
	if(start->prawySyn!=NULL){
	find(liczba,start->prawySyn);
	}
	else{
	std::cout<<"nie ma takiej liczby"<<std::endl;
		}	
	}	
}

Element* Drzewo::RR(Element* ojciec) {
  Element* temp;
  temp = ojciec->prawySyn;
  ojciec->prawySyn = temp->lewySyn;
  temp->lewySyn = ojciec;
  return temp;
}

Element* Drzewo::LL(Element* ojciec) {
  Element* temp;
  temp = ojciec->lewySyn;
  ojciec->lewySyn = temp->prawySyn;
  temp->prawySyn = ojciec;
  return temp;
}

Element* Drzewo::LR(Element* ojciec) {
  Element* temp = ojciec->lewySyn;
  ojciec->lewySyn = RR(temp);
  return LL(ojciec);
}

Element* Drzewo::RL(Element* ojciec) {
  Element* temp = ojciec->prawySyn;
  ojciec->prawySyn = LL(temp);
  return RR(ojciec);
}















