#ifndef NUCI_HPP
#define NUCI_HPP

#include "Fruct.hpp"

class Nuci:public Fruct   // pretul final = cantitate/pret_100_grame
{


   int cantitate;
   int pret_100_grame;

public:

   Nuci();
   Nuci(int,int);
   float getPret();
   void afisare();  
   char getInitial();
};

#endif