#ifndef GERMANARMYFACTORY_HPP
#define GERMANARMYFACTORY_HPP

#include "IArmyFactory.hpp"

class CGermanArmyFactory :
   public IArmyFactory
{
public:
   CGermanArmyFactory();
   ~CGermanArmyFactory();
   virtual IWarior* createWarior();
   virtual IArcher* createArcher();
   virtual IHorseman* createHoresman();
};

#endif


