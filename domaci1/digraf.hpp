#ifndef DIGRAF_HPP_INCLUDED
#define DIGRAF_HPP_INCLUDED

#include "list.hpp"
#include "cvor.hpp"


class Digraf{
private:
    List<Cvor> cvor;
    int kapacitet;

public:
    Digraf(){kapacitet=5; }
    Digraf(int k) {kapacitet=k; }
    Digraf(Digraf &d){kapacitet=d.kapacitet; }

    bool dodajcvor(const Cvor& c){
            if(cvor.size()<kapacitet){
                return cvor.add(cvor.size()+1,c);
            }
            return false;
        }

    void ispis(Cvor &c){
        cout<<endl<<endl;
        cout<<"Cvor sa indexom "<<c.getId()<<endl<<"-----------------"<<endl;
        cout<<"Indegree :"<<c.getIndegree()<<endl;
        cout<<"Outdegree :"<<c.getOutdegree()<<endl;
    }

   /* void ispissvih(){
        Cvor c;
        cout<<endl<<"Cvorovi: " << endl;
        cout<<"----------"<<endl;

        for (int i=0;i<cvor.size();i++){
            cout<<"Cvor sa indexom "<<i<<":"<<endl;
            cvor.read(i,c);
            cout<<"Indegree :"<<c.getIndegree()<<endl;
            cout<<"Outdegree :"<<c.getOutdegree()<<endl;
            cout<<endl<<endl;

    }*/
   /* void prolazak(int i){
        Cvor c
    for (int x=0;x<cvor.size();x++){
            cvor.read(x,c);
            if(i==c.getId)

    }*/
};


#endif // DIGRAF_HPP_INCLUDED
