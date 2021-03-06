// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>


const char THING_ID[] = "433dd3ec-7d5d-4fae-8f35-3eaeb50ddef2";

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)

void onWaterChange();

CloudSwitch water;

void initProperties(){

  ArduinoCloud.setThingId(THING_ID);
  ArduinoCloud.addProperty(water, READWRITE, ON_CHANGE, onWaterChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
