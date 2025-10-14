#pragma once
#include "ProgrammingPattterns\Builder\Builder.h"

class 
Director {
public:
	Director(Builder* _builder) : builder(_builder) {}
	~Director() = default;

	void 
	construct() {
		if (builder) {
			builder->buildParteA();
			builder->buildParteB();
		}
	}

	void 
	show() {
		Producto* producto = builder->getProducto();
		if (producto) {
			producto->show();
			delete producto;
		}
	}

private:
	Builder* builder;
};