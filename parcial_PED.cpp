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

void clasificarPunto(PuntoTrayectoria &punto) { 
    if (punto.distanciaOrigen <=  5) {
punto.clasificacion = " CERCANO";
} else if (punto.distanciaOrigen <=  10) {
punto.clasificacion = "INTERMEDIO";
    } else if   
    (punto.distanciaOrigen <=  20) {
punto.clasificacion = "LEJANO";
} else {
punto.clasificacion = "EXTREMO";
    }
}
//Encontrsr el punto mas alejado 

PuntoTrayectoria* obtenerPuntoMasAlejado(PuntoTrayectoria puntos[], int cantidad) {
PuntoTrayectoria* masAlejado = &puntos[0];

 for (int i = 1; i < cantidad; i++) {
if 
(puntos[i].distanciaOrigen > masAlejado->distanciaOrigen) {
masAlejado = &puntos[i];
        }
    }
    
    return masAlejado;
}




int main()
{ 
    PuntoTrayectoria p1;
    

    return 0;


}