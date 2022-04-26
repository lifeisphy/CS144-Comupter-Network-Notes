# Memory, Byte Order, and packet Formats

Endianness:
represent 0x0400=1024

Little endian:least significant byte is at lowest address
address
0    1
0x00 0x04
Big endian : most significant byte is at lowest address

address
0    1
0x04 0x00

Network Byte Order: Big Endian

You have to convert network byte order values to your host order. For example, packet has a 16-bit port in network byte order, you are using a struct to access it, you want to check on your x86 processor if the port is 80
```C
uint16_t http_port = 80;
if(packet->port==http_port){

}
```
Helper functions: htons,ntohs,htonl,ntohl
htons(): host to network short
ntohl(): network to host long 
```C
#include <arpa/inet.h>
uint16_t http_port = 80;
uint16_t packet_port = ntohs(packet_port);
if (packet_port == http_port) {
    //OK
}
```
Be careful whenever you handle network data!

Otherwise you will wast many avoidable hours debugging your code due to forgetting to convert or converting twice.

### Packet Formats

Internet specification
RFC 791 specifies IPv4
The top shows the bits from 0 to 31,packets are written 4-bytes wide.Since IPv4 have 5-rows require fields, this means that ip-header is at least 20 bytes long.
Destination port: 2bytes 0-65535,stored in big endian
port 1400: 0x0578  05 78