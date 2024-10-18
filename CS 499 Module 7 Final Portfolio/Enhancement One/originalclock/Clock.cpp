#include "Header.h"
//Constructor for Clock12 class is here.
Clock12::Clock12(): hours(12), minutes(0), seconds(0), meridian("AM") {}

void Clock12::addHour(int h) {
    hours = (hours + h) % 12;
    hours = hours ? hours : 12;  // Change 0 hour to 12 hour.
    meridian = (hours + h) / 12 % 2 == 0 ? "AM" : "PM";
}

void Clock12::addMinute(int m) {
    minutes = (minutes + m) % 60;
    if (minutes + m >= 60) addHour(1);
}

void Clock12::addSecond(int s) {
    seconds = (seconds + s) % 60;
    if (seconds + s >= 60) addMinute(1);
}

string Clock12::getTime() const {
    stringstream time;
    time << setw(2) << setfill('0') << hours << ":"
         << setw(2) << setfill('0') << minutes << ":"
         << setw(2) << setfill('0') << seconds << " "
         << meridian;
    return time.str();
}

Clock24::Clock24(): hours(0), minutes(0), seconds(0) {}

void Clock24::addHour(int h) {
    hours = (hours + h) % 24;
}

void Clock24::addMinute(int m) {
    minutes = (minutes + m) % 60;
    if (minutes + m >= 60) addHour(1);
}

void Clock24::addSecond(int s) {
    seconds = (seconds + s) % 60;
    if (seconds + s >= 60) addMinute(1);
}

string Clock24::getTime() const {
    stringstream time;
    time << setw(2) << setfill('0') << hours << ":"
         << setw(2) << setfill('0') << minutes << ":"
         << setw(2) << setfill('0') << seconds;
    return time.str();
}
