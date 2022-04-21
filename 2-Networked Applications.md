# Network Applications
* Read/Write data over network
* Dominant model: bidirectional 双向, reliable byte stream connection
    1. One side reads what the other write
    2. Operates in both directions
    3. Reliable(unless connection breaks)

1. B waiting for connecion
2. A request B for connection, and build a connection
3. A/B write data and B/A read it
4. Both ends can break the connecion

###  World Wide Web (HTTP)
* Short for **Hypertext Transfer Protocol**
* request: GET / HTTP/1.1
* response: HTTP/1.1 200 OK
* 

### BitTorrent
A program that allows people to share and exchange large files.Unlike the web, where a client requests documents from a server, in bittorrent a client requests documents from other clients.

A client can request from many others in parallel, bittorent breaks files up into chunks of data, called pieces. When a clinet downloads a complete piece from other client , It tells other clients it has that piece , they can download it too.
Swarms: Collections of collaborating clients.

BitTorrent uses the exact same mechanism as the world wide web, a reliable bidirectional byte string , but a little bit different way. when client want to download a file ,  it first has to find sth called a torrent file, usually found in WWW, and download it in HTTP. The file incldes info of the file you want to download.
Tracker: A node of track of what clients are swarm members.

Request Tracker to get the list,and get file pieces through members of swarm

### Skype
caller:you(caller) open connection to Client B(recipient/receiver) and sends data.
But unlike the web where there's a client and a server , in the skype you have 2 clients requesting data from each other.
Client A <--> Client B
Both Clients--> Client A,B

##### Skype with Complications
NAT:Network address translator
A small home wireless router is a NAT when a mobile phone connects the internet, it is behind the NAT.

If you are behind a NAT ,then you can open connections out to the internet. But other nodes on the Internet can't easily open connections to you.
Skype has to work around this.
**Rendezvous server**:

Client A
Client B:With NAT
Rendezvous(R)

Client B->NAT->R
When Client A calls Client B:Send message -> R
R->send the call->B
If B accepts: A<->B

Reverse connection: It reverses the expected direction for initiating the connection(A want to conn B but B connects A)

What if both clients are behind NATS?
A second kind of server:Relay
A<->Relay
B<->Relay
A---data--->Relay---data--->B
