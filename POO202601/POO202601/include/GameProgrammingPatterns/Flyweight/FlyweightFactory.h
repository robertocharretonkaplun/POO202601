#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Flyweight/Flyweight.h"
#include "GameProgrammingPatterns/Flyweight/ConcreteFlyweight.h"

class 
FlyweightFactory {
public:
	FlyweightFactory()  = default;
	~FlyweightFactory() = default;

	Flyweight* getFlyweight(char symbol) {
		if (flyweights.find(symbol) == flyweights.end()) {
			flyweights[symbol] = new ConcreteFlyweight(symbol);
		}
		return flyweights[symbol];
	};

private:
	std::unordered_map<char, Flyweight*> flyweights;
};