#include "Persona.h"
#include <iostream>
#include <sstream>

using std::string;
using std::stringstream;
using std::endl;
using std::cout;

Persona::Persona(string pUsuario, string pCorreo, string pPassword){
  usuario = pUsuario;
  correo = pCorreo;
  password = pPassword;
}

Persona::~Persona(){

}

void Persona::setUsuario(string pUsario){
  usuario = pUsario;
}

string Persona::getUsuario(){
  return usuario;
}

void Persona::setCorreo(string pCorreo){
  correo = pCorreo;
}

string Persona::getCorreo(){
  return correo;
}

void Persona::setPassword(string pPassword){
  password = pPassword;
}

string Persona::getPassword(){
  return password;
}

string Persona::toString(){
  stringstream ss;
  ss << "Usario: " << usuario << endl << "Correo: " << correo << endl << "Password: " << password << endl;
  cout << ss;
  return ss.str();
}
