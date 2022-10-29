#include "drivers/serial_port.h"
#include "drivers/frame_buffer.h"



    
    int main(){

           char msg[] = "Hello! welcome to MMP_OS. Have a nice day!";
   
    
    serial_write(0x3F8, msg, sizeof(msg));
    fb_write(msg, sizeof(msg));
    
    }
