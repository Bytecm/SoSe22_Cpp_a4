#ifndef SOSE22_CPP_A4_INVALIDVALUEINPUTEXCEPTION_H
#define SOSE22_CPP_A4_INVALIDVALUEINPUTEXCEPTION_H

#include <string>

class invalidValueInputException{
public:
    invalidValueInputException() { }

    std::string getError() const{
        return "Die gegebene Werte liegen nicht alle im zulässigen Zahlenbereich";
    }

private:
};

#endif //SOSE22_CPP_A4_INVALIDVALUEINPUTEXCEPTION_H
