#ifndef GERMANARCHER_HPP
#define GERMANARCHER_HPP

#include "IArcher.hpp"
class CGermanArcher :
   public IArcher
{
public:
   CGermanArcher();
   ~CGermanArcher();
   virtual void info();
};

#endif

