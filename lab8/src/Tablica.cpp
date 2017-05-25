#include "Tablica.hh"
#include "Quicksort.hh"
using namespace std;
void Tablica::stworz(int rozmiar)
{
	tab=new int[rozmiar];
  	rozmiar=rozmiar;
}
void Tablica::wypelnij(int rozmiar)
{	srand(time(0));
	for(int i=1;i<rozmiar;i++)
	{	
	tab[i]=1+rand()%70;
	if(tab[i]==tab[0]||tab[1]||tab[2]||tab[3]||tab[4]||tab[5]||tab[6])
	{
	i--;
	}	
}
}

void Tablica::wyswietl(int rozmiar)
{	cout<<"twoje liczby do keno to: "<<endl;
	for(int i=0;i<rozmiar;i++)
	{
	cout<<tab[i]<<", ";
	}
}
void Tablica::run(int rozmiar)
{	int pivot=1;
	/*cout<<"Polozenie pivota:"<<endl
	<<"Pierwszy element: wpisz '1'"<<endl
	<<"Srodek: wpisz '2'"<<endl
	<<"Randomowy: wpisz '3'"<<endl
	<<endl;
	cin>>pivot;*/
//stworz(rozmiar);
//wypelnij(rozmiar);
quicksort(tab,0,rozmiar-1,pivot);
wyswietl(rozmiar);

}
