//-------------------------------------------------
//-- Dato de Entrada: radio, altura (double)
//-- Dato de Salida:  AreaSupcilindrica (double)
//--                  AreaLateral (double)
//--                  AreaTotal (double)
//--                  Volumen  (double)
//--------------------------------------------------

#include "CCilindro.h"

int main()
{
  double r, h;

  cout << "Radio : ";  cin >> r;
  cout << "Altura: "; cin >> h;

  CCilindro   objeto(r,h);
  cout << "El area de la base es: " << objeto.areaDeLaBase() << "\n";
  cout << "El area lateral es    : "  << objeto.areaLateral() << "\n";
  cout << "El area total es      : "  << objeto.areaTotal() << "\n";
  cout << "El volumen es         : "   << objeto.volumen() << "\n";

  cout << "\nAhora creamos un segundo objeto usando el constructor por defecto\n";
  CCilindro c1;
  cout << "Radio : ";  cin >> r;
  cout << "Altura: "; cin >> h;
  c1.setRadio(r);
  c1.setAltura(h);
  cout << "El area de la base es: " << c1.areaDeLaBase() << "\n";
  cout << "El area lateral    es: "  << c1.areaLateral() << "\n";
  cout << "El area total      es: " << c1.areaTotal() << "\n";
  cout << "El volumen         es: " << c1.volumen() << "\n";

  cout << "\n\n";
  cout << "Ahora creamos un tercer cilindro pero el objeto es dinamico\n";
  CCilindro  *pObjeto = nullptr;

  cout << "Radio : ";  cin >> r;
  cout << "Altura: "; cin >> h;

  pObjeto = new CCilindro(r,h);
  cout << "El area de la base es: " << pObjeto->areaDeLaBase() << "\n";
  cout << "El area lateral es   : " << (*pObjeto).areaLateral() << "\n";
  cout << "El area total   es   : " << pObjeto->areaTotal() << "\n";
  cout << "El volumen es        : "  << pObjeto->volumen() << "\n";
  delete pObjeto;

  return 0;}
