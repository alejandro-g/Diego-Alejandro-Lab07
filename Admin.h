#include <iostream>
#ifndef ADMIN_H
#define ADMIN_H
#include "Persona.h"


using std::string;

class Admin : public Persona{
  private:
    string date;

  public:
    Admin(string, string, string, string);
    ~Admin();
    void setDate(string);
    string getDate();
    void toString();

};
#endif
