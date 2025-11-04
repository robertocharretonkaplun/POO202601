#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Observer/Observer.h"
#include "GameProgrammingPatterns/Observer/Notification.h"

class 
TemperatureSensor {
public:
	TemperatureSensor()  = default;
	~TemperatureSensor() = default;

	void addObserver(Observer* _observer) {
		observers.push_back(_observer);
	}

	void setNotification(const Notification& _notification) {
		for (auto& observer : observers) {
			observer->onNotify(_notification);
		}
	}

	void setTemperature(int _temperature) {
		temperature = _temperature;
		notifyObservers();
	}

	void notifyObservers() {
		for (auto& observer : observers) {
			observer->onNotify(temperature);
		}
	}

private:
	std::vector<Observer*> observers;
	int temperature;
};