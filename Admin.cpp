#include "Persona.h"
#include "Admin.h"
#include <sstream>
#include <iostream>

using std::endl;
using std::cout;
using std::string;
using std::stringstream;

Admin::Admin(string pUsario, string pCorreo, string pPassword, string pDate):Persona(pUsario, pCorreo, pPassword){
}

void Admin::setDate(string pDate){
  date = pDate;
}

string Admin::getDate(){
  return date;
}

Admin::~Admin(){

}

void Admin::toString(){
  cout << Persona::toString() << "Fecha en la que ingreso: " << date << endl;
}
