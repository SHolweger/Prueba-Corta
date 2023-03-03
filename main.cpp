#include <iostream>

#include "Propietario.cpp"

using namespace std;

int main() {
  string nombres, apellidos, direccion, fecha_nacimiento, nit;
  int telefono;
  double cui;

  cout << "Bienvenido de vuelta!";
  cout << "Ingresar NIT: ";
  cin >> nit;
  cout << "Ingresar CUI: ";
  cin >> cui;
  cout << "Ingresar Nombres: ";
  cin >> nombres;
  cout << "Ingresar Apellidos: ";
  cin >> apellidos;
  cout << "Ingresar Direccion: ";
  cin >> direccion;
  cout << "Ingrese Fecha de Nacimiento: ";
  cin >> fecha_nacimiento;
  cout << "Ingresar No. Telefono: ";
  cin >> telefono;
  //Instancias
  int opc;
  Propietario obj = Propietario(nombres, apellidos, direccion, fecha_nacimiento, telefono, nit, cui);
  cout << "\n¿Que desea hacer? \n1.Mostrar\n2.Agregar\n3.Modificar Valor";
  cin >> opc;
  switch (opc) {
  case 1:
    obj.mostrar();
    break;
  case 2:
    obj.agregar();
    break;
  case 3:
    cout << "¿Que quieres modificar? 1.Nit 2. Cui 3. Nombres 4.apellidos 5. Direccion 6. Fecha Nacimiento 7. Telefono";
    cin >> opc;
    switch (opc) {
    case 1:
      cout << "ingrese nuevo NIT: ";
      cin >> nit;
      obj.setNit(nit);
      obj.mostrar();
      break;
    case 2:
      cout << "ingrese nuevo CUI: ";
      cin >> cui;
      obj.setCui(cui);
      obj.mostrar();
      break;
    case 3:
      cout << "ingrese nuevos Nombres: ";
      cin >> nombres;
      obj.setNombre(nombres);
      obj.mostrar();
      break;
    case 4:
      cout << "ingrese nuevo Apellidos: ";
      cin >> apellidos;
      obj.setApellido(apellidos);
      obj.mostrar();
      break;
    case 5:
      cout << "ingrese nueva Direccion: ";
      cin >> direccion;
      obj.setDireccion(direccion);
      obj.mostrar();
      break;
    case 6:
      cout << "ingrese nueva Fecha de nacimiento: ";
      cin >> fecha_nacimiento;
      obj.setFecha(fecha_nacimiento);
      obj.mostrar();
      break;
    case 7:
      cout << "ingrese nuevo Telefono: ";
      cin >> telefono;
      obj.setTelefono(telefono);
      obj.mostrar();
      break;

    default:
      cout << "Parametro no reconocido";
      break;
    }
    break;

  default:
    cout << "ERROR OPCION NO VALIDA";
    break;
  }
}