# The four layer of Internet model

Application
Transport
Network
Link

Link layer's job is to carry the data over one link at a time .
Ethernet and Wi-Fi:Two examples of link layers

Network layer: deliver packets end to end across the internet from the source to the destination
network layer packets are called datagrams, they consist of some data to and from the addresses.

Packet:contains data such like where it from and where it go towards. The latter two is its **Header**

Router:(只有Network 和Link 两个层次) at the other end of the link. The link layer of the router accepts the datagram from the link and hands it up to the network layer inside the router


### Network Layer
Network Layer and Link Layer are saparated , there are many different types of link layers, each of then works in very different way. But the network layer can handle all of them without getting deep into the detail.

网络层是特殊的。
IP协议是必须使用的。

- Ip makes a best-effort attempt to deliver our datagrams to the other end. But it makes no promises.
- IP datagrams can get lost, can be delivered out of order, and can be corrupted. Ther are no guarantees.

How can the internet work at all when the packets are not guaranteed to be delievered?

### Transport Layer
If an application wants a guarantee that its data will be re-transmitted when necessary and will be delievered to the application in order and without corruption, then it needs another protocol running on top of IP that's the job of transport layer

The most common transport layer is TCP, or the **transmission control protocol**.

The job of TCP is to make sure that the data at one end of the internet is correctly delivered in the right order to the application at the other end of the internet. If network layers drop some datagrams, TCP will transmit them multiple times if needed. If the network delievers them out of order, perhaps because two packets follow a different path to their destination,TCP will put the data back to the correct order again.

网络层只能提供不可靠传输。

网络邮件、网络应用程序常常使用TCP，而不用担心如何实现其中的细节。这些程序开发者可以直接发挥出TCP实现者为TCP赋予的强大优势，并重复使用TCP正确地传输数据。**复用**是分层的一大好处

But not all applications need data to be delivered correctly. For example , if a video conference application is sending a snippet of video in a packet, there may be no point waiting for the packet to be re-transmitted multiple times,better than just move on. 
If a application dont need reliable data delivery, it can use much simpler UDP, or **User datagram protocol** instead.(UDP协议也是在传输层)

TCP and UDP are the most commonly used transport layer services.


### Applocation layer
As we saw in the last video, applications typically want a bidirectional reliable byte stream between two endpoints. They can send whatever bytestream they want ,and applicaions have their own protocol to define the semantics of data flowing between the two endpoints.

### Putting it all together:
应用层把数据交给传输层，传输层使用TCP/UDP协议进行可靠的/不可靠的数据传输。传输层将数据转交网络层，网络层使用IP协议把数据分成Packets进行传输。在数据链路层，Packets are transmitted hop by hop until it reaches the destination。目标计算机网络层把接收到的数据包组装成完整数据交给传输层，传输层交给应用层。

### IP is the "thin waist"
IP protocol runs over many many diffrent linked layers such as ehternet,WiFi,DSL,3G,...

Application: http/https, ssh,smtp,ftp,...
Transport: TCP,UDP,RTP,...
Network: IP
Link:Ethernet,WiFi,DSL,3G,...

### The 7-layer OSI Model
Sever layer open systems interconnection, or OSI

7 layer->4 layer
Applcation(http),Presentation(ASCII)->Application
Transport,Session(TCP)->Transport
Network(IP)->Network
Link,Physical(Ehternet)->Link