#include "Persona.h"
#include "Supervisor.h"
#include <sstream>
#include <iostream>

using std::endl;
using std::cout;
using std::string;
using std::stringstream;

Supervisor::Supervisor(string pUsuario, string pCorreo, string pPassword, int contador):Persona(pUsuario, pCorreo, pPassword){
}

int Supervisor::getContador(){return contador;}

Supervisor::~Supervisor(){
  
}

void Supervisor::toString(){
  stringstream ss;
  ss << Persona::toString() << "Las veces que el programa ha estrado es: " << contador << endl;
}
