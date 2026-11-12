    CXX = g++
    CXXFLAGS = -O2 -std=c++17 -Wall
    OBJS = object_store.o replication.o chunk.o
    all: aurorastore
    aurorastore: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)
    clean:
	rm -f *.o aurorastore
