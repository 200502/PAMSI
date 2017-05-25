#include <iostream>
#include <ctime>
#include "IRunnable.hh"
#include "ITablica.hh"
#include "Tablica.hh"
#include "Clock.hh"
#include "ITabAso.hh"
#include "TabHash.hh"

using namespace std;
int main()
{
	Clock watch;
	IRunnable *object;
	int rozmiar=1000000;
	TabHash *tablica=new TabHash(rozmiar);
	object = tablica;
	watch.start(1, rozmiar, object);
	return 0;
}
