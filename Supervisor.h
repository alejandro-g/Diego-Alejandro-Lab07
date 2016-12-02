#include  <iostream>
#include "Persona.h"
#ifndef SUPERVISOR_H
#define SUPERVISOR_H

using std::string;

class Supervisor : public Persona{
  private:
    int contador;
  public:
    Supervisor(string, string, string, int);
    ~Supervisor();
    void setContador(int);
    int getContador();
    void toString();

};
#endif
