//
// Created by Gig on 10/18/2017.
//

#include "log.h"
#include <iostream>
#include <ctime>
#include <algorithm>

std::string getTime();

Log::Log(char lvl)
        : level(lvl)
{};

void Log::log(std::string msg) {
    std::cout << getTime() << " " << level << ": " << msg << "\n";
}

std::string getTime() {
    std::time_t result = std::time(nullptr);
    std::string time = std::asctime(std::localtime(&result));
    time.erase(std::remove(time.begin(), time.end(), '\n'));
    return time;
}


