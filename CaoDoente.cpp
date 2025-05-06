#include "CaoDoente.h"
#include <string>
using namespace std;

string CaoDoente::emitaSomFala() {
    return "Sou um Cão e estou doente :( : " + this->getVoz() + " " + this->getVoz() + " " + this->getVoz() + " " + this->getVoz();
}
