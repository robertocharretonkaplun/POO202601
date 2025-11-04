#pragma once

class Notification;

class 
Observer {
public:
	Observer()  = default;
	~Observer() = default;

	virtual void onNotify(int _value) = 0;
	virtual void onNotify(Notification _value) = 0;
};