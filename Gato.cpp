#include "Gato.h"
#include <string>
using namespace std;

string Gato::emitaSomFala() {
    return "Sou um Gato: " + this->getVoz() + " " + this->getVoz() + " " + this->getVoz() + " " + this->getVoz();
}
