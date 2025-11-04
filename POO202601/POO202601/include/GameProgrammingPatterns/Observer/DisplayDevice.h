#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Observer/Observer.h"
#include "GameProgrammingPatterns/Observer/Notification.h"
class 
DisplayDevice : public Observer {
public:
	DisplayDevice()  = default;
	~DisplayDevice() = default;

	void
	onNotify(int _value) override {
		std::cout << "Display Device: Temperature updated to " << 
			_value << " degrees." << std::endl;
	}

	void
	onNotify(Notification _value) override {
		NotificationData* data = _value.getNotificationData();
		if (data) {
			std::cout << "Display Device: New Notification Received!" << std::endl;
			std::cout << "Title: " << data->title << std::endl;
			std::cout << "Preview: " << data->preview << std::endl;
			std::cout << "Message: " << data->message << std::endl;
		}
	}

};