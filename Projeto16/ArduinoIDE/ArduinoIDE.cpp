// Included Libraries
#include <LedControl.h>
#include <binary.h>

// MACROS are defined here
LedControl dotMatrixDisplay = LedControl(12, 11, 10, 1);

void setup()
{
  // put your setup code here, to run once:
  dotMatrixDisplay.shutdown(0, false);
  dotMatrixDisplay.setIntensity(0, 8);
  dotMatrixDisplay.clearDisplay(0);
}

void loop()
{
  // put your main code here, to run repeatedly:

  dotMatrixDisplay.drawFromString(0, "0011110001000010101001011000000110100101100110010100001000111100");
  delay(0.5 * 1000);
  dotMatrixDisplay.drawFromString(0, "0000000000000000000000000000000000000000000000000000000000000000");
  delay(0.5 * 1000);
}
