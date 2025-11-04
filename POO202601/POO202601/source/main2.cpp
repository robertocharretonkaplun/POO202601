#include "Prerequisites.h"
#include "GameProgrammingPatterns\Observer\TemperatureSensor.h"
#include "GameProgrammingPatterns\Observer\DisplayDevice.h"
#include "GameProgrammingPatterns\Observer\Notification.h"

int main() {
	TemperatureSensor sensor;
	DisplayDevice display;
	sensor.addObserver(&display);
	sensor.setTemperature(25);
	sensor.setTemperature(30);

	Notification* notification = new Notification();
	notification->setNotificationData(
		"Warning!",
		"High Temperature Detected",
		"The temperature has exceeded the safe limit."
	);
	sensor.setNotification(*notification);

	// Alternatively, using NotificationData directly
	NotificationData* data = new NotificationData();
	data->title = "Alert!";
	data->preview = "Critical Temperature Level";
	data->message = "Immediate action is required to cool down the system.";

	Notification notification2;
	notification2.setNotificationData(data);
	sensor.setNotification(notification2);

	NotifySound* soundAlert = new NotifySound();
	soundAlert->setNotificationData(
		"Sound Alert!",
		"Temperature Spike",
		"A sound alert has been triggered due to high temperature."
	);

	sensor.setNotification(*soundAlert);



	return 0;
}