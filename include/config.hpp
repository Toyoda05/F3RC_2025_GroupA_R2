#pragma once
#include <PinNames.h>

namespace InterruptInPins
{
    constexpr PinName MEASURING_ENCODER1_A      = PC_10;     // エンコーダー1：測定輪エンコーダ1のA相
    constexpr PinName MEASURING_ENCODER2_A      = PC_11;     // エンコーダー2：測定輪エンコーダ2のA相
    constexpr PinName OMUNI_ENCODER1_A          = PC_2 ;     // エンコーダー3：オムニ用エンコーダー1のA相
    constexpr PinName OMUNI_ENCODER2_A          = PC_0 ;     // エンコーダー4：オムニ用エンコーダー2のA相
    constexpr PinName OMUNI_ENCODER3_A          = PC_9 ;     // エンコーダー5：オムニ用エンコーダー3のA相
    constexpr PinName PSEUDO_SERVO_ENCODER1_A   = PC_8 ;     // エンコーダー6：疑似サーボ用エンコーダー1のA相
    constexpr PinName PSEUDO_SERVO_ENCODER2_A   = PA_12;     // エンコーダー7：疑似サーボ用エンコーダー2のA相
    constexpr PinName PSEUDO_SERVO_ENCODER3_A   = PB_2 ;     // エンコーダー8：疑似サーボ用エンコーダー3のA相
}

namespace DigitalInPins
{
    constexpr PinName MEASURING_ENCODER1_B      = PC_12;     // エンコーダー1：測定輪エンコーダ1のB相
    constexpr PinName MEASURING_ENCODER2_B      = PD_2 ;     // エンコーダー2：測定輪エンコーダ2のB相
    constexpr PinName OMUNI_ENCODER1_B          = PC_3 ;     // エンコーダー3：オムニ用エンコーダー1のB相
    constexpr PinName OMUNI_ENCODER2_B          = PC_1 ;     // エンコーダー4：オムニ用エンコーダー2のB相
    constexpr PinName OMUNI_ENCODER3_B          = PB_8 ;     // エンコーダー5：オムニ用エンコーダー3のB相
    constexpr PinName PSEUDO_SERVO_ENCODER1_B   = PC_6 ;     // エンコーダー6：疑似サーボ用エンコーダー1のB相
    constexpr PinName PSEUDO_SERVO_ENCODER2_B   = PA_11;     // エンコーダー7：疑似サーボ用エンコーダー2のB相
    constexpr PinName PSEUDO_SERVO_ENCODER3_B   = PB_1 ;     // エンコーダー8：疑似サーボ用エンコーダー3のB相
  
}