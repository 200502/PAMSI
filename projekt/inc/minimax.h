#ifndef LISC_H
#define LISC_H


#include "ruch.h"


class lisc{
public:
  ruch move; 
  vector<lisc> mozliwe_ruchy; 
  int ktory_gracz; 
  bool max_min; 
  int ilosc_ruchow; 
  
  lisc();

  bool czy_mozliwy_ruch(int x, int y);

  bool czy_puste_pole(int x, int y);

  bool czy_mozliwe_bicie(int x, int y);

  void skopiuj_plansze(int indeks_wektora);

  void skopiuj_wszedzie_plansze(int rozmiar_wektora);

  void dodaj_wspolrzedne(int x_pocz, int y_pocz, int x_kon, int y_kon);

  void wyszukaj_mozliwe_ruchy();

  void policz_ilosc_ruchow();

  void ocen_ruch();

  void wykonaj_ocene_dla_wektora_lisci();

  int zwroc_indeks_wektora_z_max_ocena();

  int zwroc_indeks_wektora_z_min_ocena();

  int zwroc_max_ocene_z_wektora();

  int zwroc_min_ocene_z_wektora();

  int minmax(int glebokosc);

  void zwroc_wspolrzedne(int &wspx_pocz, int &wspy_pocz, int &wspx_kon, int &wspy_kon);
};


#endif
