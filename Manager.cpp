#include "Persona.h"
#include "Manager.h"
#include <sstream>
#include <iostream>

using std::endl;
using std::cout;
using std::string;
using std::stringstream;

Manager::Manager(string pUsuario, string pCorreo, string pPassword, double pSueldo):Persona(pUsuario, pCorreo, pPassword){

}

double Manager::getSueldo(){return sueldo;}

Manager::~Manager(){
  
}

void Manager::toString(){
  stringstream ss;
  ss << Persona::toString() << "Su sueldo es: " << sueldo << endl;
}
