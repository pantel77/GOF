#ifndef ROMANARMYFACTORY_HPP
#define ROMANARMYFACTORY_HPP

#include "IArmyFactory.hpp"

class CRomanArmyFactory :
   public IArmyFactory
{
public:
   CRomanArmyFactory();
   ~CRomanArmyFactory();
   virtual IWarior* createWarior();
   virtual IArcher* createArcher();
   virtual IHorseman* createHoresman();
};

#endif


