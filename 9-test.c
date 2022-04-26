#include <stdio.h>
#include <inttypes.h>
void judge(){
    uint16_t val = 0x400;
    uint8_t* ptr=(uint8_t*)&val; 
    if(ptr[0]==0x40){
        printf("big endian\n");
    }else if(ptr[1]==0x40){
        print("little endian\n");
    }else{
        printf("unknown endianess!\n");
    }
}
int main(){
    unsigned short a=0xabcd;
    char* pa=&a;
    printf("a=0x%x\n",a);
    printf("address0:0x%hx\naddress1:0x%hx\n",*pa,*(pa+1));
    return 0;
}