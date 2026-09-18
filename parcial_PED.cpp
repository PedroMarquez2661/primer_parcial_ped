#include <iostream>
using namespace std;


struct PuntoTrayectoria {
    int id;
    string nombre;
    float coordenadas[3];
    float distanciaOrigen;
    string clasificacion;
};
//funcionalidad del void para los puntos de la trayectoria 
void RegistrarPunto(PuntoTrayectoria &punto) {
    cout << "identificador de punto: "; //id
    cin >> punto.id; //se revice 
    cin.ignore();
    
    cout << "Nombre o descripcion: ";
    getline(cin, punto.nombre); //getline por el nombre
    
    cout << "Coordenada X: "; //entras de coordes, por medio de arrays
    cin >> punto.coordenadas[0];
    cout << "Coordenada Y: ";
    cin >> punto.coordenadas[1];
    cout << "Coordenada Z: ";
    cin >> punto.coordenadas[2];
}
float calcularDistancia(PuntoTrayectoria *punto) {
 float x = punto->coordenadas[0]; 
float y = punto->coordenadas[1];
  float z = punto->coordenadas[2];
    float suma = (x * x) + (y * y) + (z * z); //2xx2
    float dist = suma / 2.0;
 float temp = 0.0;
    while (dist != temp) {
          temp = dist;
               dist = (suma / temp + temp) / 2.0;
    }
    punto->distanciaOrigen = dist;
    return dist; 




};

void MotrasEstudiante(PuntoTrayectoria  int id,);
{
    cout << "------DATOS----------" << endl;
    cout << "Nombre: " << e.nombre << endl;
    cout << "Edad: " << e.edad << " anos " << endl;
    cout << "Nota: " << e.nota << endl;
}
int main()
{ //No lo hagas tan evidente que fue hecho por Ia, hazlo de una manera mas simple y solo usa la libreria iostream

    PuntoTrayectoria p1;
    

    return 0;
}