    CC = gcc
    CFLAGS = -O2 -Wall
    OBJS = flow_table.o packet_parse.o tunnel.o acl.o stats.o
    all: auroranet
    auroranet: $(OBJS) main.o
	$(CC) $(CFLAGS) -o $@ $(OBJS) main.o
    clean:
	rm -f *.o auroranet
