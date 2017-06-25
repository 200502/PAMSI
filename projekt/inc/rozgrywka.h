#ifndef ROZGRYWKA_H
#define ROZGRYWKA_H

#include "minimax.h"

class rozgrywka{
public:
  pionek board[8][8]; 
  lisc drz_ocen;

  rozgrywka();  

  void wyswietl();

  int pionki_gracza( int ktory_gracz);

  void przenies_pionek( int wspx_pocz, int wspy_pocz, int wspx_kon, int wspy_kon, int ktory_gracz );

  void damka( int wspx_kon, int wspy_kon, int ktory_gracz);
  
  void zbicie( int wspx_pocz, int wspy_pocz, int wspx_kon, int wspy_kon, int ktory_gracz);

  bool czy_puste_pole(int x, int y);

  bool czy_mozliwy_ruch(int x, int y, int ktory_gracz);

  bool czy_poprawny_ruch(int xpocz, int ypocz, int xkon, int ykon, int ktory_gracz);

  bool czy_mozliwe_bicie(int wspx, int wspy, int ktory_gracz);

  bool czy_bicie(int wspx_pocz, int wspy_pocz, int wspx_kon, int wspy_kon, int ktory_gracz);
  
  void ruch_gracza(int ktory_gracz);

  void ruch_komputera(int ktory_gracz);


};




#endif
