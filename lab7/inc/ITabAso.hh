#ifndef ITABASO_HH
#define ITABASO_HH
#include <iostream>
#include "IRunnable.hh"
class ITabAso:public IRunnable
{
	public:
	virtual void run(int wielkosc)=0;
};
#endif
