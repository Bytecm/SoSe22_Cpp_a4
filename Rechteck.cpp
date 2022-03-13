#include "Rechteck.h"

std::string Rechteck::toString() const {
    std::string result = "Rechteck: " + Graf::toString() + " Hoehe: " + std::to_string(k_h) + " Breite: " + std::to_string(k_w);
    return result;
}

double Rechteck::flaeche() const {
    return k_w * k_h;
}
