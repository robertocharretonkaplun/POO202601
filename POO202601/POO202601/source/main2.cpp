#include "Prerequisites.h"
#include "ProgrammingPattterns/MiSingleton.h"

// Inicializamos la instancia estatica
MiSingleton* MiSingleton::instance = nullptr;

int main() {
	// Usamos la estructura de mi singleton
	MiSingleton* singleton = MiSingleton::getInstance();
	singleton->setData(42);

	std::cout << "Valor del singleton: " << singleton->getData() << std::endl;

	MiSingleton* singleton2 = MiSingleton::getInstance();
	std::cout << "Valor del singleton 2: " << singleton2->getData() << std::endl;

	return 0;
}