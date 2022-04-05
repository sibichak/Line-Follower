// Define pins for Sensor
 int Sensor[5] = {A0, A5, A1, A2, A3};
  // Define pin for Touch
   const int Start_Button = 2;
    int buttonState = LOW;
     int x = 0;
      // Define pin for Sharp Sensor
       int Sharp = A4;
        // Define pin for Motor 
         const int Motor_1 = 4;
          const int Motor_2 = 7;
           // Define pin for Motor Enable
            const int Motor_Enable_1 = 5;
             const int Motor_Enable_2 = 6;
              // Define Motor Direction
               const int FW = HIGH;
                const int BK = LOW;
            
void setup() 
{
 // Initialize sensor pins as Input.
  for (int i = 0; i < 5; i++) 
   {
    pinMode(Sensor[i], INPUT);
   }
    // Initialize the touch button pin as an input:
     pinMode(Start_Button, INPUT);
      // Initialize the Sharp pin as an input:
       pinMode(Sharp, INPUT);
        // Initialize Motor pins as Output.
         pinMode(Motor_1,OUTPUT);
          pinMode(Motor_2,OUTPUT);
           pinMode(Motor_Enable_1,OUTPUT);
            pinMode(Motor_Enable_2,OUTPUT);
             Serial.begin(9600);
}

void loop() 
{
 //buttonState = digitalRead(Start_Button);
  //while(buttonState == LOW) 
   //{
    //if(x == 0)
     //{
      //Serial.println("Start");
       //x = 1;
      //}
       int y = analogRead(Sharp);
        Serial.print("y = ");
         Serial.println(y);
          //if (y < 450)
           //{
            DisplaySensorData();
             if(Sensor[0]== 1 && Sensor[1]== 0 && Sensor[2]== 0 && Sensor[3]== 0 && Sensor[4]== 0)
              {
               Motor_Speed(BK, 120, BK, 120);
                Serial.println("Left Sharp");
              }
               else if(Sensor[0]== 1 && Sensor[1]== 1 && Sensor[2]== 0 && Sensor[3]== 0 && Sensor[4]== 0)
                {
                 Motor_Speed(BK, 90, BK, 100);
                  Serial.println("Left Left");
                } 
                 else if(Sensor[0]== 0 && Sensor[1]== 1 && Sensor[2]== 0 && Sensor[3]== 0 && Sensor[4]== 0)
                  {
                   Motor_Speed(BK, 70, BK, 90);
                    Serial.println("Left");
                  } 
                   else if(Sensor[0]== 0 && Sensor[1]== 1 && Sensor[2]== 1 && Sensor[3]== 0 && Sensor[4]== 0)
                    {
                     Motor_Speed(BK, 0, BK, 200);
                      Serial.println("Left Forward");
                    }
                     else if(Sensor[0]== 0 && Sensor[1]== 1 && Sensor[2]== 1 && Sensor[3]== 1 && Sensor[4]== 0)
                      {
                       Motor_Speed(FW, 95, BK, 95);
                        Serial.println("Forward");
                      }
                       else if(Sensor[0]== 0 && Sensor[1]== 0 && Sensor[2]== 1 && Sensor[3]== 0 && Sensor[4]== 0)
                        {
                         Motor_Speed(FW, 95, BK, 95);
                          Serial.println("Forward");
                        }
                         else if(Sensor[0]== 0 && Sensor[1]== 0 && Sensor[2]== 1 && Sensor[3]== 1 && Sensor[4]== 0)
                          {
                           Motor_Speed(FW, 200, FW, 0);
                            Serial.println("Right Forward");
                          }
                           else if(Sensor[0]== 0 && Sensor[1]== 0 && Sensor[2]== 0 && Sensor[3]== 1 && Sensor[4]== 0)
                            { 
                             Motor_Speed(FW, 90, FW, 70);
                              Serial.println("Right");
                            }
                             else if(Sensor[0]== 0 && Sensor[1]== 0 && Sensor[2]== 0 && Sensor[3]== 1 && Sensor[4]== 1)
                              { 
                               Motor_Speed(FW, 100, FW, 90);
                                Serial.println("Right Right");
                              }
                               else if(Sensor[0]== 0 && Sensor[1]== 0 && Sensor[2]== 0 && Sensor[3]== 0 && Sensor[4]== 1)
                                { 
                                 Motor_Speed(FW, 120, FW, 120);
                                  Serial.println("Right Sharp");
                                }
                                 else if(Sensor[0]== 0 && Sensor[1]== 0 && Sensor[2]== 0 && Sensor[3]== 0 && Sensor[4]== 0)
                                  { 
                                   Motor_Speed(FW, 0, BK, 0);
                                    Serial.println("Stop");
                                  } 
          //}
           //else 
            //{
             //Motor_Speed(FW, 0, BK, 0);
            //}
   //} 
