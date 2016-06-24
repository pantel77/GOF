#include "Game.hpp"



CArmy * CGame::createArmy(IArmyFactory& factory)
{
   CArmy * ptrArmy = new CArmy;
   ptrArmy->vArchers.push_back(factory.createArcher());
   ptrArmy->vHorsemen.push_back(factory.createHoresman());
   ptrArmy->vWarior.push_back(factory.createWarior());
   return ptrArmy;
}

