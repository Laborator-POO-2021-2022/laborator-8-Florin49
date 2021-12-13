#ifndef BANANA_HPP
#define BANANA_HPP


#include "Fruct.hpp"

class Banana: public Fruct // pret final = pret bucata
{


   int pret_bucata;  

public:
   Banana();
   Banana(int);
   float getPret();
   void afisare();
   char getInitial();
 
};

#endif