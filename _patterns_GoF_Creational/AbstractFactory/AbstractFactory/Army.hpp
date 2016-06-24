#ifndef ARMY_HPP
#define ARMY_HPP

#include <vector>
#include "IArcher.hpp"
#include "IHorseman.hpp"
#include "IWarior.h"

class CArmy
{
public:
   CArmy();
   ~CArmy();
   void showArmy();
   std::vector<IArcher*> vArchers;
   std::vector<IHorseman*> vHorsemen;
   std::vector<IWarior*> vWarior;
};

#endif

