
//Cheny's MWC
//Added features:
//VTOL support: VTOL-SLT
//LFP protocol Telemetry support
//V-Tail FW added


//***************  Version 18-5  ***************
/*
第一个CyMWC版本：
加入了LFP协议数据发送
整合了SLT和TR的VTOL机型代码，其中SLT已经实装并成功飞行
整合了V尾固定翼代码


*/



 
/*    ATmega328p 管脚汇总

    遥控信号
D2  油门/PPM
D4  副翼
D5  升降舵
D6  方向舵
D7  AUX1
D8  AUX2

                       固定翼   飞翼    四旋翼   VTOL-STL     其他
D3  SERVO_6  motor2    方向舵            FL         FL
D9  SERVO_8  motor0    油门     油门     BR         BR 
D10 SERVO_7  motor1    升降舵            FR         FR
D11 SERVO_5  motor3    副翼2    副翼2    BL         BL  
D12 SERVO_4            副翼1    副翼1              PITCH
A0  SERVO_1                                        ROLL       battery ADC
A1  SERVO_2                                        YAW       
A2  SERVO_3                                      Main Motor   current ADC
A3                                                            rssi ADC
A4                                                            I2C-SDA
A5                                                            I2C-SCL
A6
A7

*/


/******************************************************
/****************** VTOL_SLT Wiring *******************
/******************************************************

          D12 -> PITCH SERVO
          A0  -> ROLL SERVO
          A1  -> YAW SERVO
          A2  -> THRUST MOTOR
          D3  -> FL MOTOR
          D10 -> FR MOTOR
          D11 -> BL MOTOR
          D9  -> BR MOTOR
          
!!ADC function (bat and rssi / A0 A2 ) should be turned off!!

How servo value is shown in GUI:
Type: AIRPLANE 
    WING1 --> PITCH SERVO*
    WING2 --> ROLL SERVO*
    RUDD -->  YAW SERVO*  
    ELEV -->  THRUST MOTOR
    
For Servos with *, you could use GUI-SERVO to trim their position.
4 HOV motors' value is not shown.

*/

/******************************************************
/****************** VTOL_TR Wiring *******************
/******************************************************
          D12 -> PITCH SERVO
          A0  -> ROLL SERVO
          A1  -> YAW SERVO
          A2  -> TRANSITION SERVO
          D3  -> FL MOTOR
          D10 -> FR MOTOR
          D11 -> BL MOTOR
          D9  -> BR MOTOR
          
!!ADC function (bat and rssi / A0 A2 ) should be turned off!!

How servo value is shown in GUI:
Type: AIRPLANE 
    WING1 --> PITCH SERVO*
    WING2 --> ROLL SERVO*
    RUDD -->  YAW SERVO*  
    ELEV -->  TRANSITION SERVO
    
For Servos with *, you could use GUI-SERVO to trim their position.
4 HOV motors' value is not shown.
    
*/

/*
 * Welcome to MultiWii.
 *
 * If you see this message, chances are you are using the Arduino IDE. That is ok.
 * To get the MultiWii program configured for your copter, you must switch to the tab named 'config.h'.
 * Maybe that tab is not visible in the list at the top, then you must use the drop down list at the right
 * to access that tab. In that tab you must enable your baord or sensors and optionally various features.
 * For more info go to http://www.multiwii.com/wiki/index.php?title=Main_Page
 *
 * Have fun, and do not forget MultiWii is made possible and brought to you under the GPL License.
 *
 */

