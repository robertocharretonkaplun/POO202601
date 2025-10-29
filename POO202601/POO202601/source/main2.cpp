#include "Prerequisites.h"
#include "GameProgrammingPatterns\Observer\TemperatureSensor.h"
#include "GameProgrammingPatterns\Observer\DisplayDevice.h"

int main() {
	TemperatureSensor sensor;
	DisplayDevice display;
	sensor.addObserver(&display);
	sensor.setTemperature(25);
	sensor.setTemperature(30);


	return 0;
}