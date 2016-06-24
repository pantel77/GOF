#ifndef GAME_HPP
#define GAME_HPP

#include "IArmyFactory.hpp"
#include "Army.hpp"

class CGame
{
public:
   CArmy * createArmy(IArmyFactory& factory);
};

#endif


