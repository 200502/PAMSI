#ifndef RUCH_H
#define RUCH_H

#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include <vector>

using namespace std;

class pionek{
public:
  int pawn;/*! parametr typu int ktorego wartosc wskazuje na odpowiedni pionek danego gracza */
  bool damka;/*! parametr typu bool stwierdzajacy czy dana figura to damka czy nie */

};


class ruch{
public:
  pionek **plansza;/*! parametr typu pionek deklarujacy plansze do gry w warcaby */
  int wspx_pocz;/*! parametr typu int zawierajacy wspolrzedna x poczatkowa ruchu */
  int wspy_pocz;/*! parametr typu int zawierajacy wspolrzedna y poczatkowa ruchu */
  int wspx_kon;/*! parametr typu int zawierajacy wspolrzedna x koncowa ruchu */
  int wspy_kon;/*! parametr typu int zawierajacy wspolrzedna y koncowa ruchu */
  int ocena;/*! parametr typu int zawierajacy ocene tablicy pionkow */

  ruch();

  bool czy_zbicie();

  void wykonaj_ruch(); // funkcja wykonuje zadany ruch
};



#endif
