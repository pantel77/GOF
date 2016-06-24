#ifndef ROMANWARIOR_HPP
#define ROMANWARIOR_HPP

#include "IWarior.h"

class CRomanWarior :
   public IWarior
{
public:
   CRomanWarior();
   ~CRomanWarior();
   virtual void info();
};

#endif
