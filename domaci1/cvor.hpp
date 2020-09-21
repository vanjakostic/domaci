#ifndef CVOR_HPP_INCLUDED
#define CVOR_HPP_INCLUDED

class Cvor{

private:
    int id;
    int indegree;
    int outdegree;

public:

    Cvor(){id=0; indegree=1 ; outdegree= 2;}
    Cvor(int a, int b, int c){id=a; indegree=b; outdegree=c; }
    Cvor(Cvor &c){id=c.id; indegree=c.indegree; outdegree=c.outdegree; }

    int getId() {return id; }
    int getIndegree() {return indegree; }
    int getOutdegree() {return outdegree; }

};


#endif // CVOR_HPP_INCLUDED
