# Life of a packet

### TCP Byte Stream

Client ---Synchronize(SYN)--->Server
Server ---Sync and acknowledge(SYN/ACK)--->Client
Client ---ACK--->Server

IP address: network layer address
TCP Port: transport layer address

Link layer: 
Wifi - WiFi Access Point
Routers : Decide where the packet to sent out on. Routers have ip address so it's also the case that it might not forward packet but rather deliver to its own software.
路由进行路径选择： best match
default route:

### Under the Hood:
Request web page from www.cs.brown.edu, use wireshark to see TCP bytes stream establishment and data exchange. Use traceroute to see route packets take through Internet