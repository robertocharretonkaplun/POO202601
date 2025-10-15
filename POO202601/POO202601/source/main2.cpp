#include "Prerequisites.h"
#include "ProgrammingPattterns\Builder\Prototype.h"
#include "ProgrammingPattterns\Prototype\PrototypeConcreto.h"

int main() {
	Prototype* original = new PrototypeConcreto();
	original->config("Original");

	// Clonar el prototipo
	Prototype* clone = original->clone();
	clone->config("Clone");
	// Mostrar información
	original->info();
	clone->info();

	delete original;
	delete clone;
	return 0;
}