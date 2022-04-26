# Goal of Internet Protocol Address

IPV4: address 32bits long (4 octets):a.b.c.d

Netmask: apply this mask, if it matches -> in the same network

- Netmask of 255.255.255.0 means if the first 24 bits match
- Netmask of 255.255.252.0 :first 22 bits match
- 255.128.0.0 : first 9 bits match.
- Smaller netmask(fewer 1s) means larger network

### Quiz

For each source ,destination ,and netmask ,mark whether the destination is in the same network as the source.
(掩码为1的位都相同时，在一个网中)
Src             Dst         Netmask     Same Network?
128.34.1.15     128.35.1.15 255.255.0.0     false
10.0.1.4        10.0.1.5    255.255.255.0   true
10.0.1.4        10.0.2.5    255.255.255.0   false
171.64.15.33    171.64.15.5 255.255.255.224 false
171.64.15.33    171.19.201.2255.0.0.0       true

