#include "Koordinate.h"

std::string Koordinate::toString() const {
    std::string result = "Koordinate: x: " + std::to_string(k_x) + " y: " + std::to_string(k_y);
    return result;
}

