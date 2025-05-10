#include <Arduino.h>   //12-17
void setup() {
    // 设定主角（程序里的变量对应硬件的引脚），引脚功能/作用（输入/输出）
  for(int i = 12; i < 18; i++)
  pinMode(i,OUTPUT);
  }
   
  void loop() {
    //来回for循环，设置好起止点
  for(int i = 12; i < 18; i++ )
    {
      digitalWrite(i , HIGH);
      delay(500);
      digitalWrite(i , LOW);
    }
    for(int i = 17;i > 11;i--)
    {
      digitalWrite(i , HIGH);
      delay(500);
      digitalWrite(i , LOW);
      }
  }
  
