#ifndef ROMANHORSEMAN_HPP
#define ROMANHORSEMAN_HPP

#include "IHorseman.hpp"

class CRomanHorseman :
   public IHorseman
{
public:
   CRomanHorseman();
   ~CRomanHorseman();
   virtual void info();
};

#endif