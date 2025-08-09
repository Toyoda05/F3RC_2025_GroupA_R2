#include "Driver/DCMotor.hpp"
DCMotor dcmotor(PWMピン, 方向ピン, 方向(0か1))

int main() {
    // DCMotorのインスタンスを作成
    DCMotor dcmotor(PinName::pwm_pin, PinName::dir_pin, false);

    // デューティ比を設定
    dcmotor.setDuty(0.5); // 50%のデューティ比

    
    while (true) {
        // デューティ比を設定
        dcmotor.setDuty(0.5); // 50%のデューティ
        wait_us(1000); 
    }
}