#pragma once


#include <iostream>
#include <string>
#include "serial.h"


namespace motor{

    void startMotor(void);
    void stopMotor(void);
    void setDutyCycle(int dutycycle, int option);
    void configPWM(int frequency, int resolution);
    float getCurrent(void);
    void InitMotor(std::string port, int baudrate, serial::Timeout timeout);

}
