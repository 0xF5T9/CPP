#pragma once
#include <iostream>
#include <string>

class Time {
private:
    int hour;
    int minute;
    int second;
public:
    Time(int hour, int minute, int second) {
        /*
        this->hour = hour;
        this->minute = minute;
        this->second = second;
        */
        setTime(hour, minute, second);
    }
    void setTime(int hour, int minute, int second) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    void setHour(int hour) {
        this->hour = hour;
    }
    void setMinute(int minute) {
        this->minute = minute;
    }
    void setSecond(int second) {
        this->second = second;
    }
    int getHour() {
        return this->hour;
    }
    int getMinute() {
        return this->minute;
    }
    int getSecond() {
        return this->second;
    }
    void nextSecond() {
        this->second++;
        if (this->second == 60) {
            this->second = 0;
            this->minute++;
        }
        if (this->minute == 60) {
            this->minute = 0;
            this->hour++;
        }
        if (this->hour == 24) {
            this->hour = 0;
        }
    }
    void previousSecond() {
        this->second--;
        if (this->second == -1) {
            this->second = 59;
            this->minute--;
        }
        if (this->minute == -1) {
            this->minute = 59;
            this->hour--;
        }
        if (this->hour == -1) {
            this->hour = 23;
        }
    }
    void display() {
        std::string ssecond = std::to_string(this->second);
        if (ssecond.length() == 1)
            ssecond = "0" + ssecond;
        std::string sminute = std::to_string(this->minute);
        if (sminute.length() == 1)
            sminute = "0" + sminute;
        std::string shour = std::to_string(this->hour);
        if (shour.length() == 1)
            shour = "0" + shour;
        std::cout << shour << ":" << sminute << ":" << ssecond << std::endl;
    }
};
