#include "Fruct.hpp"
#include "Banana.hpp"
#include "Morcovi.hpp"
#include "Portocale.hpp"
#include "Nuci.hpp"

int main()
{
    Fruct **Alimente;
    Fruct *F; ///element interschimbare
    Alimente= new Fruct*[10];
    
    Alimente[0]=new Nuci(2300,4);
    Alimente[1]=new Banana(2);
    Alimente[2]=new Portocale(45,3);
    Alimente[3]=new Banana(1);
    Alimente[4]=new Morcovi(7400,1);
    Alimente[5]=new Nuci(5650,1);
    Alimente[6]=new Portocale(33,2);
    Alimente[7]=new Portocale(19,3);
    Alimente[8]=new Morcovi(4950,5);
    Alimente[9]=new Portocale(20,1);
    
    cout<<"Pretul produselor:\n";
    for(int i=0;i<10;i++)
        {
             ////cout<<endl;
             Alimente[i]->afisare();
        }
    cout<<endl;
    float s=0;
    for(int i=0;i<10;i++)
             s+=Alimente[i]->getPret();   
    cout<<"Costul tuturor fructelor este: "<<s<<"lei\n";
    
    for(int i=0;i<9;i++)
       for(int j=i+1;j<10;j++) 
            if(  (  (Alimente[i]->getInitial()=='p' || Alimente[i]->getInitial()=='m' || Alimente[i]->getInitial()=='n') && Alimente[j]->getInitial()=='b' )    || 
              (     (Alimente[i]->getInitial()=='m' || Alimente[i]->getInitial()=='n' ) && Alimente[j]->getInitial()=='p'     )    ||
                   (Alimente[i]->getInitial()=='n' && Alimente[j]->getInitial()=='m' )                  ) 
                    {
                        F=Alimente[i];
                        Alimente[i]=Alimente[j];
                        Alimente[j]=F;
                    }
    cout<<"\nLista produselor cu preturile aferente in ordinea BANANE,PORTOCALE,MORCOVI,NUCI:\n";
    for(int i=0;i<10;i++)
        {
             ////cout<<endl;
             Alimente[i]->afisare();
        }
    cout<<endl;
    s=0;
    
    for(int i=0;i<10;i++)
        if(Alimente[i]->getInitial()=='p')
            s+=Alimente[i]->getPret();
    
    cout<<"Totalul de portocalele costa "<<s<<"lei";


    
    for(int i=0;i<10;i++)
       delete Alimente[i];
    delete[] Alimente;


}