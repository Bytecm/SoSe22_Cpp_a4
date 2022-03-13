#include "Graf.h"

std::string Graf::toString() const {
    std::string result = "Graf: Einfuegepunkt: " + einfuegepunkt.toString();
    return result;
}

double Graf::flaeche() const {
    return 0;
}
