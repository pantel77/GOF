#ifndef ROMANARCHER_HPP
#define ROMANARCHER_HPP

#include "IArcher.hpp"
class CRomanArcher :
   public IArcher
{
public:
   CRomanArcher();
   ~CRomanArcher();
   virtual void info();
};

#endif


