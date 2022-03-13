#ifndef SOSE22_CPP_A4_GRAF_H
#define SOSE22_CPP_A4_GRAF_H


#include "Koordinate.h"

class Graf {

public:
    virtual double flaeche() const;

    virtual std::string toString() const;

private:
    Koordinate einfuegepunkt;

protected:
    Graf(Koordinate einfuegepunkt) : einfuegepunkt(einfuegepunkt) { }
};


#endif //SOSE22_CPP_A4_GRAF_H
