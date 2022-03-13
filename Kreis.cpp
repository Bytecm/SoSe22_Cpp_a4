//
// Created by chris on 11.03.2022.
//

#include "Kreis.h"
#include <cmath>

std::string Kreis::toString() const {
    std::string result = "Kreis: " + Graf::toString() + " Radius: " + std::to_string(k_radius);
    return result;
}

double Kreis::flaeche() const {
    return M_PI * k_radius * 2;
}
