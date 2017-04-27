#include <iostream>
#include "Tablica.hh"
#include "Tablica2.hh"
#include "Czasomierz.hh"
#include "Opcje.hh"
#include "QSTest.hh"
#include "Funkcje.hh"
#include "QuickSort.hh"
#include "HeapSort.hh"

#define TRYB 1
#define ROZM_MAKS 100

int main() {

	
	Czasomierz timer(1);

	std::fstream plik;


	 // Zmiana rodzaju pivota 1 - Pierwszy z lewej, 2- Losowy, 3- Mediana z trzech

		 // Zmiana rodzaju sanych 1 - rosnąco, 2- losowo, 3 - malejaco
		
		 std::string nazwa = "Sort/Sort";
		 
		 plik.open(nazwa, std::ofstream::out );

		 std::cerr << std::endl << nazwa << std::endl;
	
			for ( int idx = 1; idx <= ROZM_MAKS; ++idx ){
				QSTest obiekt(pow( PODSTAWA, idx ));
			
				std::cerr << std::endl << idx << std::endl;
				PrzygotujDane(pow( PODSTAWA, idx ),TRYB);
		
				timer.ZmierzCzas( obiekt,TRYB, pow( PODSTAWA, idx ) );
				timer.SkrocZapiszDo(plik);	
				
				
		}
	
		plik.close();	
	return 0;
}


