// Included Libraries
#include <LedControl.h>
#include <binary.h>

// MACROS are defined here
LedControl dotMatrixDisplay = LedControl(12, 11, 10, 1);

// Gloabl Variables are declared here
float leituraAnalogica;

void setup()
{
  // put your setup code here, to run once:
  dotMatrixDisplay.shutdown(0, false);
  dotMatrixDisplay.setIntensity(0, 8);
  dotMatrixDisplay.clearDisplay(0);
  pinMode(0, INPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:

  leituraAnalogica = analogRead(0);
  if ((leituraAnalogica > 911))
  {
    dotMatrixDisplay.drawFromString(0, "1111111111111111111111111111111111111111111111111111111111111111");
  }
  else
  {
    if ((leituraAnalogica > 798))
    {
      dotMatrixDisplay.drawFromString(0, "0000000011111111111111111111111111111111111111111111111111111111");
    }
    else
    {
      if ((leituraAnalogica > 685))
      {
        dotMatrixDisplay.drawFromString(0, "0000000000000000111111111111111111111111111111111111111111111111");
      }
      else
      {
        if ((leituraAnalogica > 572))
        {
          dotMatrixDisplay.drawFromString(0, "0000000000000000000000001111111111111111111111111111111111111111");
        }
        else
        {
          if ((leituraAnalogica > 459))
          {
            dotMatrixDisplay.drawFromString(0, "0000000000000000000000000000000011111111111111111111111111111111");
          }
          else
          {
            if ((leituraAnalogica > 346))
            {
              dotMatrixDisplay.drawFromString(0, "0000000000000000000000000000000000000000111111111111111111111111");
            }
            else
            {
              if ((leituraAnalogica > 233))
              {
                dotMatrixDisplay.drawFromString(0, "0000000000000000000000000000000000000000000000001111111111111111");
              }
              else
              {
                if ((leituraAnalogica > 120))
                {
                  dotMatrixDisplay.drawFromString(0, "0000000000000000000000000000000000000000000000000000000011111111");
                }
                else
                {
                  dotMatrixDisplay.drawFromString(0, "0000000000000000000000000000000000000000000000000000000000000000");
                }
              }
            }
          }
        }
      }
    }
  }
  delay(0.5 * 1000);
}
