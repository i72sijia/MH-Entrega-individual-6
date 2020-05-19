#include <stdio.h>
#include <stdlib.h>
#include <cmath>

#include <iostream>


using namespace std;

int main()
{
	double posX, posY; // Coordenadas actuales de la partícula

	double fitness; // Variable que recoge el valor de fitness de una partícula

	cout << "\nCalculadora del valor de fitness de todas las partículas en una iteración\n";

	for(int i=0; i< 5; i++)
	{
		cout << "\n";
	
		cout << "------------------------------\nPartícula [" << i+1 << "]\n\n";

		cout << "\n--> Introduce la posición actual de la partícula [x]: ";
		cin >> posX;

		cout << "--> Introduce la posición actual de la partícula [y]: ";
		cin >> posY;

		cout << "\nCalculando...\n";

		fitness = 20 + (pow(posX,2) - 10*cos(2*3.14*posX)) + (pow(posY,2) - 10*cos(2*3.14*posY));

		cout << "\nFitness partícula [" << i+1 << "]: " << fitness;

		cout << "\n\n";

	}

	cout << "\nFin de la iteración \n\n";

}