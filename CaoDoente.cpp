#include "CaoDoente.h"
#include <string>
using namespace std;

string CaoDoente::emitaSomFala() {
    return "Sou um C�o e estou doente :( : " + this->getVoz() + " " + this->getVoz() + " " + this->getVoz() + " " + this->getVoz();
}
