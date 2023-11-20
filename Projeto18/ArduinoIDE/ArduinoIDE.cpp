// This c++ code is generated by PictoBlox

// Included Libraries
#include <LiquidCrystal.h>

// MACROS are defined here
const int resetPin = 2;
const int enablePin = 3;
const int d4 = 8;
const int d5 = 9;
const int d6 = 10;
const int d7 = 11;
LiquidCrystal lcd16x2(resetPin, enablePin, d4, d5, d6, d7);

// Gloabl Variables are declared here
float botao;
float led;

// User Defined Functions
void leBotao()
{
  if (digitalRead(13))
  {
    lcd16x2.setCursor(9 - 1, 1 - 1);
    lcd16x2.print("UP  ");
    if ((botao == 1))
    {
      mudaLed();
      botao = 0;
    }
  }
  else
  {
    lcd16x2.setCursor(9 - 1, 1 - 1);
    lcd16x2.print("DOWN");
    botao = 1;
  }
}
void mudaLed()
{
  if ((led == 0))
  {
    lcd16x2.setCursor(6 - 1, 2 - 1);
    lcd16x2.print("ON ");
    digitalWrite(12, true);
    led = 1;
  }
  else
  {
    lcd16x2.setCursor(6 - 1, 2 - 1);
    lcd16x2.print("OFF");
    digitalWrite(12, false);
    led = 0;
  }
}

void setup()
{
  // put your setup code here, to run once:
  lcd16x2.begin(16, 2);
  pinMode(13, INPUT);
  pinMode(12, OUTPUT);

  lcd16x2.setCursor(1 - 1, 1 - 1);
  lcd16x2.print("Ligando...");
  delay(1 * 1000);
  lcd16x2.setCursor(1 - 1, 2 - 1);
  lcd16x2.print("Ainda ligando...");
  delay(1 * 1000);
  lcd16x2.clear();
  lcd16x2.setCursor(1 - 1, 1 - 1);
  lcd16x2.print("Ligou o");
  lcd16x2.setCursor(1 - 1, 2 - 1);
  lcd16x2.print("TESTADOR DE LEDs");
  delay(1 * 1000);
  lcd16x2.clear();
  lcd16x2.setCursor(1 - 1, 1 - 1);
  lcd16x2.print("Button: UP");
  lcd16x2.setCursor(1 - 1, 2 - 1);
  lcd16x2.print("LED: ON");
  botao = 1;
  led = 0;
}

void loop()
{
  // put your main code here, to run repeatedly:

  leBotao();
}
