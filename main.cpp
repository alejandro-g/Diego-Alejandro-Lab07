#include <iostream>
#include "Persona.h"
#include "Admin.h"
#include "Intern.h"
#include "Manager.h"
#include "Supervisor.h"
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main(){
vector<Admin*> admin;
vector<Intern*> intern;
vector <Manager*> manager;
vector <Supervisor*> supervisor;
Persona* interns;
Persona* managers;
Persona* supervisors;
Persona* admins;

int opcion = 0;
string usuario;
string password;
string correo;
int contador;
int tipo;
int dias;
double sueldo;
bool foundUser = false;
bool foundPassword = false;
usuario = "admin";
password = "sixteencharacters";
usuario = "manager";
password = "estodeberiasermasde16";
usuario = "intern";
password = "intern16";
usuario = "supervisor";
password = "superman";

do{
    cout << "Ingrese su usuario: ";
    cin >> usuario;
    cout << "Ingrese password: ";
    cin >> password;
    if(usuario == "admin" || password == "sixteencharacters"){
      cout << "Menu de admin" << endl;
      cout << "1. Crear un usuario" << endl << "2. Eliminar usuario" << endl << "Ingrese su opcion: " << opcion << endl;
      if(opcion == 1){
        cout << "Ingrese nombre del nuevo usuario: " << endl;
        cin >> usuario;
        cout << "Ingrese password del nuevo usuario: " << endl;
        cin >> password;
      }
      if(opcion == 2){

      }
    }

    for (int i = 0; i < admin.size(); i++) {
      if(admin.at(i)->getUsuario() == usuario && admin.at(i)->getPassword() == password){
        int cont = 1;
        admins = admin.at(i);
        cout << "Estoy en admin" << endl;
      }
    }

    if(usuario == "manager" || password == "estodeberiasermasde16"){
      cout << "Menu de manager" << endl;
      cout << "1. Crear usuario" << endl << "2. Eliminar usuario" << endl << "INgrese su opcion: " << opcion << endl;
      if(opcion == 1){

      }
      if(opcion == 2){

      }

          for (int i = 0; i < manager.size(); i++) {
            if(manager.at(i)->getUsuario() == usuario && manager.at(i)->getPassword() == password){
              int cont = 3;
              managers = manager.at(i);
              cout << "Estoy en manager" << endl;
            }
          }
    }

    if(usuario == "intern" || password == "")
    for (int i = 0; i < intern.size(); i++) {
      if(intern.at(i)->getUsuario() == usuario && intern.at(i)->getPassword() == password){
        int cont = 2;
        interns = intern.at(i);
        cout << "Estoy en intern" << endl;
      }
    }

    if(usuario == "supervisor" || password == "superman"){

    }
    for (int i = 0; i < supervisor.size(); i++) {
      if(supervisor.at(i)->getUsuario() == usuario && supervisor.at(i)->getPassword() == password){
        int cont = 4;
        supervisors = supervisor.at(i);
        cout << "Estoy en supervisor" << endl;
      }
    }

    ofstream myFile;
    myFile.open("Usuarios.txt");
    myFile << "Usuarios en lista";
    myFile.close();

}while(opcion > 0 && opcion < 3);

}
