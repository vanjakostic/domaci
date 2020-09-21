#include <iostream>
#include "list.hpp"
#include "cvor.hpp"
#include "digraf.hpp"

using namespace std;

int main()
{
    Digraf d;

    Cvor c0(0,1,2);
    Cvor c1(1,2,2);
    Cvor c2(2,1,1);
    Cvor c3(3,1,2);
    Cvor c4(4,2,0);

    d.dodajcvor(c0);
    d.dodajcvor(c1);
    d.dodajcvor(c2);
    d.dodajcvor(c3);
    d.dodajcvor(c4);

    cout<< "Unesite id cvora :"<<endl;
    int i;
    cin>>i;


    if(i==0)
        d.ispis(c0);
    if(i==1)
        d.ispis(c1);
    if(i==2)
        d.ispis(c2);
    if(i==3)
        d.ispis(c3);
    if(i==4)
        d.ispis(c4);
    if(i>4 || i<0 )
        cout<<"Ne postoji cvor sa tim indexom"<<endl;


    return 0;
}
