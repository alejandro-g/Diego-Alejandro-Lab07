#include "Persona.h"
#include "Intern.h"
#include <sstream>
#include <iostream>

using std::endl;
using std::cout;
using std::string;
using std::stringstream;

Intern::Intern(string pUsuario, string pCorreo, string pPassword, int pDias):Persona(pUsuario, pCorreo, pPassword){

}

int Intern::getDias(){return dias;}

void Intern::toString(){
  stringstream ss;
  ss << Persona::toString() << "Numero de dias en los que estara: " << dias << endl;
}
