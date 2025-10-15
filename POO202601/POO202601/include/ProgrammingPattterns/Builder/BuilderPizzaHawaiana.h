#pragma once
#include "ProgrammingPattterns\Builder\ConstructorPizza.h"
#include "ProgrammingPattterns\Builder\Pizza.h"

class 
BuilderPizzaHawaiana : public ConstructorPizza {
public:
	BuilderPizzaHawaiana() {
		pizza = new Pizza();
	}
	~BuilderPizzaHawaiana() {
		delete pizza;
	}

	void 
	buildIngredientes() override {
		pizza->addIngrediente(QUESO);
		pizza->addIngrediente(TOMATE);
		pizza->addIngrediente(JAMON);
		pizza->addIngrediente(PINA);
	}

	void addIngrediente(INGREDIENTES ingrediente) override {
		pizza->addIngrediente(ingrediente);
	}

	Pizza* 
	getPizza() override {
		return pizza;
	}

private:
	Pizza* pizza;
};