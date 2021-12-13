#include "Portocale.hpp"

Portocale::Portocale():nr_kilograme(0),pret_kg(0)
{


}
Portocale::Portocale(int nr,int pk):nr_kilograme(nr),pret_kg(pk)
{


}

float Portocale::getPret()
{
     return (float)this->nr_kilograme*this->pret_kg;
}
void Portocale::afisare()
{
    cout<<"Portocale --> "<<this->getPret()<<"lei"<<endl;
}
char Portocale::getInitial()
{
    return 'p';
}