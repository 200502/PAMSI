#include "rozgrywka.h"
#include <iostream>
using namespace std;

int main()
{ 
  rozgrywka R;
  
  cout << "\t\t" << "...WARCABY..." << endl;
  R.wyswietl(); // pierwsze wyswietlenie

    while((R.pionki_gracza(1)!=0)||(R.pionki_gracza(2)!=0)){
      if(R.pionki_gracza(1)==0){ break;}
      R.ruch_gracza(1); // ROBI RUCH.....................
      R.wyswietl();
    //  if(R.pionki_gracza(2)==0){ break;} // OBCZAIC CO TO 1 CO 2
      //R.ruch_komputera(2); // RUCH KOMPUTERA
     // R.wyswietl();
  }

  if(R.pionki_gracza(1)!=0)
    cout << endl << "\t\t" << "GRACZ" << " WYGRYWA! " << endl;

  cin.ignore();
  getchar();
  return 0;
}

