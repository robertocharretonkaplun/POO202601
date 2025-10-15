#include "Prerequisites.h"
#include "ProgrammingPattterns\Builder\ConstructorPizza.h"
#include "ProgrammingPattterns\Builder\BuilderPizzaHawaiana.h"
#include "ProgrammingPattterns\Builder\Pizza.h"


int main() {
	ConstructorPizza* constructorHawaiana = new BuilderPizzaHawaiana();
	constructorHawaiana->addIngrediente(INGREDIENTES::ACEITUNAS);
	constructorHawaiana->addIngrediente(INGREDIENTES::QUESO);
	constructorHawaiana->addIngrediente(INGREDIENTES::QUESO);
	constructorHawaiana->addIngrediente(INGREDIENTES::QUESO);
	constructorHawaiana->buildIngredientes();

	Pizza* pizzaHawaiana = constructorHawaiana->getPizza();
	pizzaHawaiana->show();

	delete constructorHawaiana;
	delete pizzaHawaiana;
	return 0;
}