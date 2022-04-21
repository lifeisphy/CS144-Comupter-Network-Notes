# Life of a packet

### TCP Byte Stream

Client ---Synchronize(SYN)--->Server
Server ---Sync and acknowledge(SYN/ACK)--->Client
Client ---ACK--->Server

IP address: network layer address
TCP Port: transport layer address

Link layer: 
Wifi - WiFi Access Point
Routers : Decide which of its links to sent out on. Routers have ip addresses so it's also the case that it might not forward packet but rather deliver to its own software. 
路由进行路径选择：fowarding table. best match
A fowarding table consists of a set of ip address patterns and the link to send it across for each pattern. When a packet arrives, the router checks which forwarding table entries pattern best matches the packet.It forwards the packet along that entries link.

default route: the first entry in the table, it matches every address. It's especially useful in edge networks.

### Under the Hood:
Request web page from www.cs.brown.edu, use wireshark to see TCP bytes stream establishment and data exchange. Use traceroute to see path that packets take through Internet

display tcp segments to brown server using port 80.
listen on en1 (name of mac) gives to wifi link layer

traceroute:
* * * means there's a router that won't tell traceroute about itself. The star shows in tracerouter's way when it wait for reply with reply timed out.