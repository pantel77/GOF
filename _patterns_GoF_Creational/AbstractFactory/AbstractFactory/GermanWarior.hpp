#ifndef CGERMANWARIOR_HPP
#define CGERMANWARIOR_HPP

#include "IWarior.h"

class CGermanWarior :
   public IWarior
{
public:
   CGermanWarior();
   ~CGermanWarior();
   virtual void info();
};

#endif

