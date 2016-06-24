#include "Game.hpp"
#include "RomanArmyFactory.hpp"
#include "GermanArmyFactory.hpp"
#include <iostream>

int main()
{
   CGame game;
   CRomanArmyFactory romanFactory;
   CGermanArmyFactory germanFactory;

   CArmy * romanArmy = game.createArmy(romanFactory);
   CArmy * germanArmy = game.createArmy(germanFactory);
   std::cout << "Roman Army" << std::endl;
   romanArmy->showArmy();
   std::cout << "\nGerman Army" << std::endl;
   germanArmy->showArmy();
}