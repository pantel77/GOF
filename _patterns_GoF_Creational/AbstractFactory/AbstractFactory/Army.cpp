#include "Army.hpp"

CArmy::CArmy()
{
}

CArmy::~CArmy()
{
   unsigned int i;
   for (i = 0; i < vArchers.size(); i++) delete vArchers[i];
   for (i = 0; i < vHorsemen.size(); i++) delete vHorsemen[i];
   for (i = 0; i < vWarior.size(); i++) delete vWarior[i];
}

void CArmy::showArmy()
{
   unsigned int i;
   for (i = 0; i < vArchers.size(); i++) vArchers[i]->info();
   for (i = 0; i < vHorsemen.size(); i++) vHorsemen[i]->info();
   for (i = 0; i < vWarior.size(); i++) vWarior[i]->info();
}
