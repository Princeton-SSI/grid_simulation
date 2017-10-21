//
// Created by Gig on 10/18/2017.
//

#ifndef GRID_SIMULATION_LOG_H
#define GRID_SIMULATION_LOG_H

#include <string>

class Log {
public:
    // The level of this logger
    static const char DEBUG = 'D';
    static const char VERBOSE = 'V';
    static const char ERROR = 'E';

    // creates a log of level @param lvl
    Log(char lvl);
    // has this logger log the given message
    void log(std::string msg);

private:
    char level;
};



#endif //GRID_SIMULATION_LOG_H
