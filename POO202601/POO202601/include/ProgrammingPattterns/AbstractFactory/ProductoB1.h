#pragma once
#include "Prerequisites.h"
#include "ProgrammingPattterns/AbstractFactory/ProductoB.h"

// Producto B1 concreto
class
ProductoB1 : public ProductoB {
public:
	void
	operacionB() const override;
};