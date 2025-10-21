#include "Prerequisites.h"
#include "ProgrammingPattterns\Decorator\ComponenteConcreto.h"
#include "ProgrammingPattterns\Decorator\DecoratorConcretoA.h"
#include "ProgrammingPattterns\Decorator\DecoratorConcretoB.h"

int main() {
	ComponenteConcreto* objeto = new ComponenteConcreto();
	DecoratorConcretoA* decoradorA = new DecoratorConcretoA(objeto);
	DecoratorConcretoB* decoradorB = new DecoratorConcretoB(decoradorA);

	objeto->operacion();
	decoradorA->operacion();
	decoradorB->operacion();

	delete objeto;
	delete decoradorA;
	delete decoradorB;
	return 0;
}