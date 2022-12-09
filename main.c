#include "io.h"
#include "uart.h"
#include "modbus.h"

void main()
{
    int i;
    delayMs(1000);
}

void delayMs(int n)
{
    for(i=0;i<n;i++);
}