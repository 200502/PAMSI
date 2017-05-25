#include <iostream>
#include <ctime>
#include "IRunnable.hh"
#include "ITablica.hh"
#include "Tablica.hh"
#include "Clock.hh"
#include "IDrzewo.hh"
#include "Drzewo.hh"

using namespace std;
int main()
{
	Clock watch;
	IRunnable *object;
	
	int rozmiar=1000000;
	//for(int i=0;i<6;i++){
	Drzewo *drzewo=new Drzewo(rozmiar);
	object = drzewo;
	watch.start(1, rozmiar, object);
	//rozmiar=rozmiar*10;
	//}
	return 0;
}
