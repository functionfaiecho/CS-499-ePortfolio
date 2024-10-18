#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

class Clock12;
class Clock24;

class Clock12 {
public:
    Clock12();
    void addHour(int);
    void addMinute(int);
    void addSecond(int);
    string getTime() const;
private:
    int hours, minutes, seconds;
    string meridian;
};

class Clock24 {
public:
    Clock24();
    void addHour(int);
    void addMinute(int);
    void addSecond(int);
    string getTime() const;
private:
    int hours, minutes, seconds;
};
