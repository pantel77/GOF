#include "GermanArmyFactory.hpp"
#include "GermanWarior.hpp"
#include "GermanHorseman.hpp"
#include "GermanArcher.hpp"


CGermanArmyFactory::CGermanArmyFactory()
{
}


CGermanArmyFactory::~CGermanArmyFactory()
{
}

IWarior* CGermanArmyFactory::createWarior()
{
   return new CGermanWarior;
}

IArcher* CGermanArmyFactory::createArcher()
{
   return new CGermanArcher;
}

IHorseman* CGermanArmyFactory::createHoresman()
{
   return new CGermanHorseman;
}