#pragma once
#include "Prerequisites.h"
#include "ProgrammingPattterns/Builder/Producto.h"
#include "ProgrammingPattterns/Builder/Builder.h"

class 
BuilderConcreto : public Builder {
public:
	BuilderConcreto();
	~BuilderConcreto() = default;

	void buildParteA() override;
	void buildParteB() override;
	Producto* getProducto() override;

private:
	Producto* producto;
};