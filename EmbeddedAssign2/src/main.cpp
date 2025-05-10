#include <Arduino.h>

void setup() // 将三个IO口设置为输出模式
{
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  Serial.begin(9600); // 初始化串口，并设定波特率
}

void loop()
{
  if (Serial.available() > 0) // 检查是否有数据可读，避免读入空数据
  {
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    digitalWrite(14, LOW);
    char c = Serial.read();
    switch (c) // 根据读入的数字，来控制不同LED的亮灭
    {
    case '1':
      digitalWrite(12, HIGH);
      Serial.print("LED1亮");
      delay(1000);
      break;
    case '2':
      digitalWrite(13, HIGH);
      Serial.print("LED2亮");
      delay(1000);
      break;
    case '3':
      digitalWrite(14, HIGH);
      Serial.print("LED3亮");
      delay(1000);
      break;
    default:
      break;
    }
  }
}