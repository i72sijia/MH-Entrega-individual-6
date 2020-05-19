#include <stdio.h>
#include <stdlib.h>
#include <cmath>

#include <iostream>


using namespace std;

int main()
{
	double posX, posY; // Coordenadas actuales de la partícula
	double random; // Número aleatorio en el rango [0, 1]
	double velAntX, velAntY; // Velocidad anterior de la partícula
	double bestX, bestY; // Mejores coordenadas globales
	double parBestX, parBestY; // Mejores coordenadas de una partícula

	double velX, velY; // Nuevas velocidades de cada partícula

	cout << "\nCalculadora de los componentes de velocidad de todas las partículas en una iteración\n";

	cout << "\nIntroduce las mejores coordenadas globales:";

	cout << "\n--> Mejor coordenada [x]: ";
	cin >> bestX;

	cout << "--> Mejor coordenada [y]: ";
	cin >> bestY;


	for(int i=0; i< 5; i++)
	{

		cout << "\n";

		cout << "------------------------------\nPartícula [" << i+1 << "]\n\n";

		cout << "--> Introduce el número aleatorio: ";
		cin >> random;

		cout << "\n--> Introduce la velocidad anterior [x]: ";
		cin >> velAntX;

		cout << "--> Introduce la velocidad anterior [y]: ";
		cin >> velAntY;

		cout << "\n--> Introduce la mejor posición de la partícula [x]: ";
		cin >> parBestX;

		cout << "--> Introduce la mejor posición de la partícula [y]: ";
		cin >> parBestY;

		cout << "\n--> Introduce la posición actual de la partícula [x]: ";
		cin >> posX;

		cout << "--> Introduce la posición actual de la partícula [y]: ";
		cin >> posY;

		cout << "\nCalculando...\n";


		velX = 0.3 * velAntX + (2 * random * (parBestX - posX)) + (2 *  random * (bestX - posX));
		velY = 0.3 * velAntY + (2 * random * (parBestY - posY)) + (2 *  random * (bestY - posY));

		cout << "\nVelocidad de la particula [" << i+1 << "]:";
		cout << "\n--> Componente [x]: " << velX;
		cout << "\n--> Componente [y]: " << velY;

		cout << "\n";
	}

	cout << "\n Fin de la iteración \n\n";
}