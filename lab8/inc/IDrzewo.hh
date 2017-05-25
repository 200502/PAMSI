#ifndef IDRZEWO_HH
#define IDRZEWO_HH
#include <iostream>
#include "IRunnable.hh"
class IDrzewo:public IRunnable
{
	public:
	virtual void run(int wielkosc)=0;
};
#endif
