#include "mbed.h"

Serial serial(USBTX,USBRX,9600);
PwmOut light(PA_9);
char var;

int main() {

  serial.printf("Press '+' to increase the bright and '-' to decrease. \n");
  var = serial.getc();

  if(var == '+')
  {
    light = light + 0.05;
  }
  if(var == '-')
  {
    light = light - 0.05;
  }
  else
  {
    serial.printf("Invalid character!\n");
    serial.printf("Please choose between '+' or '-' \n");
  }
}