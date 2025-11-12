#include "Prerequisites.h"
#include "ProgrammingPattterns\ChainOfResponsability\ManejadorConcretoA.h"
#include "ProgrammingPattterns\ChainOfResponsability\ManejadorConcretoB.h"
#include "ProgrammingPattterns\ChainOfResponsability\ManejadorConcretoC.h"

int main() {
	ManejadorConcretoC manejadorC(nullptr, "None");
	ManejadorConcretoB manejadorB(&manejadorC, "Manejador C");
	ManejadorConcretoA manejadorA(&manejadorB, "Manejador B");

	int peticiones[] = { 5, 9, 15, 25, 35 };
	for (int peticion : peticiones) {
		manejadorA.manejarPeticion(peticion);
	}

	//manejadorA.manejarPeticion(7);
	//manejadorA.manejarPeticion(5);
	//manejadorA.manejarPeticion(15);

	



	return 0;
}