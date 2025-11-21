#include "Prerequisites.h"
#include "GameProgrammingPatterns/Flyweight/FlyweightFactory.h"

int main() {
	FlyweightFactory factory;
	Flyweight* flyweightA = factory.getFlyweight('A');
	Flyweight* flyweightB = factory.getFlyweight('B');
	Flyweight* flyweightC = factory.getFlyweight('C');
	Flyweight* flyweightD = factory.getFlyweight('D');
	Flyweight* flyweightA2 = factory.getFlyweight('A');

	flyweightA->draw(10, 20);
	flyweightB->draw(30, 40);
	flyweightC->draw(50, 60);
	flyweightD->draw(70, 80);
	flyweightA2->draw(40, 20);

	delete flyweightA;
	delete flyweightB;
	delete flyweightC;
	delete flyweightD;





	return 0;
}