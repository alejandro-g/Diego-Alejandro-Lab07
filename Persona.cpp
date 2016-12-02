#include "Persona.h"
#include <iostream>

using std::string;
using std::stringstream;

Persona::Persona(string pUsuario, string pCorreo, string pPassword){
  usuario = pUsario;
  correo = pCorreo;
  password = pPassword;
}

Persona::~Persona(){

}

void Persona::setUsuario(string pUsario){
  usario = pUsario;
}

string Persona::getUsuario(){
  return usuario;
}

void Persona::setCorreo(string pCorreo){
  correo = pCorreo;
}

string Persona::getCorreo(){
  return correol;
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
