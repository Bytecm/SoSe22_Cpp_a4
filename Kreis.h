//
// Created by chris on 11.03.2022.
//

#ifndef SOSE22_CPP_A4_KREIS_H
#define SOSE22_CPP_A4_KREIS_H


#include "Graf.h"
#include "invalidValueInputException.h"

class Kreis : public Graf{

public:
    Kreis(Koordinate einfuegepunkt, int radius = 0) : Graf(einfuegepunkt) {
        if(radius < 0){
            throw invalidValueInputException();
        }
        k_radius = radius;
    }

    double flaeche() const;

    std::string toString() const ;

private:
    int k_radius;

};


#endif //SOSE22_CPP_A4_KREIS_H
