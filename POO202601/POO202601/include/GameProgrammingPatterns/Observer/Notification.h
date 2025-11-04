#pragma once
#include "Prerequisites.h"

struct NotificationData {
	std::string title;
	std::string preview;
	std::string message;

};

class 
Notification {
public:
	Notification() = default;
	~Notification() = default;

	NotificationData* 
	getNotificationData() {
		return data;
	}

	void 
	setNotificationData(const std::string& _title, const std::string& _preview, const std::string& _message) {
		if (!data) {
			data = new NotificationData();
		}
		data->title   = _title;
		data->preview = _preview;
		data->message = _message;
	}

	void 
	setNotificationData(NotificationData* _data) {
		data = _data;
	}

private:
	NotificationData* data;
};

class NotifySound : public Notification
{
public:
	NotifySound() : Notification() {}
	~NotifySound();

private:
	int soundIDl;
};