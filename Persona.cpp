#include "Persona.h"
#include <iostream>

using std::string;

Persona::Persona(){

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
