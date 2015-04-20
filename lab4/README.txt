A:
0000000000400624 T _Z7averagePdRd
0000000000400652 T _Z7averageif
000000000040067a T main


B:
output:
1 8
4 8
4 8
8 8
Reason:
sizeof(a)指的是char a的大小(1 bit) ,sizeof(pa)則是指指標pa指向的空間大小.
sizeof(b)指的是int b的大小(4 bit) ,sizeof(pb)則是指指標pb指向的空間大小.
sizeof(c)指的是float c的大小(4 bit) ,sizeof(pc)則是指指標pc指向的空間大小.
sizeof(d)指的是double d的大小(8 bit) ,sizeof(pd)則是指指標pd指向的空間大小.

