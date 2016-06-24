#include "RomanArmyFactory.hpp"
#include "RomanArcher.hpp"
#include "RomanHorseman.hpp"
#include "RomanWarior.hpp"


CRomanArmyFactory::CRomanArmyFactory()
{
}


CRomanArmyFactory::~CRomanArmyFactory()
{
   
}

IWarior* CRomanArmyFactory::createWarior()
{
   return new CRomanWarior;
}

IArcher* CRomanArmyFactory::createArcher()
{
   return new CRomanArcher;
}

IHorseman* CRomanArmyFactory::createHoresman()
{
   return new CRomanHorseman;
}
