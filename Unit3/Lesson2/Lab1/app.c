#include "uart.h"

unsigned char String_Buffer[100] = "learn-in-depth:Yomna";
unsigned char const string_buffer2[100] = "to create a rodata section";
void main(void)
{
    UART0_Send_String(String_Buffer);
}