#pragma once
#include "Prerequisites.h"
#include "ProgrammingPattterns\Builder\Prototype.h"

class 
PrototypeConcreto : public Prototype {
public:
	PrototypeConcreto()  = default;
	~PrototypeConcreto() = default;

	Prototype* 
	clone() const override {
		PrototypeConcreto* copy = new PrototypeConcreto();
		copy->config(value);
		return copy;
	}

	void 
	config(const std::string _value) override {
		value = _value;
	}

	void 
	info() const override {
		std::cout << "Prototype Concreto with value: " << value << std::endl;
	}


private:
	std::string value;
};
