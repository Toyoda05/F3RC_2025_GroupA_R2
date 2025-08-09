#include "Driver/DCMotor.hpp"
#include "config.hpp"



int main() {
    DCMotor dcmotor(PwmOutPins::OMUNI_MOTOR1_PWM, DigitalOutPins::OMUNI_MOTOR1_DIR, 0);

    while (true) {
        // デューティ比を設定
        dcmotor.setDuty(0.5); // 50%のデューティ
        wait_us(1000); 
    }
    return 0;
}