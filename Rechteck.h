#ifndef SOSE22_CPP_A4_RECHTECK_H
#define SOSE22_CPP_A4_RECHTECK_H

#include "Graf.H"
#include "invalidValueInputException.h"

class Rechteck : public Graf {

public:

    Rechteck(Koordinate einfuegepunnkt, int w = 0, int h = 0) : Graf(einfuegepunnkt){
        if(w < 0 || h < 0){
            throw invalidValueInputException();
        }
        k_w = w;
        k_h = h;
    }

    double flaeche() const;

    std::string toString() const;

private:
    int k_w, k_h;













};











#endif //SOSE22_CPP_A4_RECHTECK_H
