#ifndef GERMANHORSMAN_HPP
#define GERMANHORSMAN_HPP

#include "IHorseman.hpp"

class CGermanHorseman :
   public IHorseman
{
public:
   CGermanHorseman();
   ~CGermanHorseman();
   virtual void info();
};

#endif

