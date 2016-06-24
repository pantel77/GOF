#ifndef ARMYFACTORY_HPP
#define ARMYFACTORY_HPP

class IWarior;
class IArcher;
class IHorseman;

class IArmyFactory
{
public:
   virtual IWarior* createWarior() = 0;
   virtual IArcher* createArcher() = 0;
   virtual IHorseman* createHoresman() = 0;
   virtual ~IArmyFactory() {}
};

#endif


