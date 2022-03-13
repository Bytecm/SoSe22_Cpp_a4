#ifndef SOSE22_CPP_A4_KOORDINATE_H
#define SOSE22_CPP_A4_KOORDINATE_H

#include <string>

class Koordinate {

public:

    Koordinate() : k_x(0), k_y(0) { }

    Koordinate(int x = 0, int y = 0) : k_x(x), k_y(y) { }

    int get_x() const{
        return k_x;
    }

    int get_y() const{
        return k_y;
    }

    std::string toString() const;

private:
    int k_x, k_y;
};

#endif //SOSE22_CPP_A4_KOORDINATE_H
