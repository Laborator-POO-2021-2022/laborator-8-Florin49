#include "Fruct.hpp"

class Portocale:public Fruct  //pretul final = nr_kilograme/pret_kg
{


   int nr_kilograme; 
   int pret_kg;
   
public:
   
   Portocale();
   Portocale(int,int);
   float getPret();
   void afisare();
   char getInitial();   
        
};