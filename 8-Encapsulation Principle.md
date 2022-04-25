# Encapsulation

Encapsulation is the result of what happens when you combine layering and packet switching

Hardware: first bit on right(EE)
![pic](./8-Encapsulation.png)
Software: first bit on left(CS)

### Encapsulation Flexibility

* Encapsulation allows you to layer recursively
* Example: Virtural Private Network(VPN)
    - HTTP application payload in 
    - a TCP transport segment in 
    - an IP network in 
    - a secured TLS presentation message in 
    - a TCP transport segment in
    - an IP network packet in 
    - an Ethernet link frame
With a vpn you open a secure network because secure connection to a network you trust such as your office for example using transport layer security tls.When you communicate with the internet and send ip packets, rather than send normally, you send them inside this vpn connection. So the ip packets go to your office network.At that point the office network can route them normally. Then you can access private protected network resources inside your office. So rather than sprinkle(洒) network protections everywhere, you just be careful of one service, the service that lets people log into the network over vpn.

Visit commertial company network: HTTP in TCP(to web server) in IP(to web server) in TLS(to VPN gateway) in TCP(to VPN gateway) in IP(to VPN gateway) in Ethernet link frame