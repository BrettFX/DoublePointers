CXX = g++
CXXFLAGS = -Wall

all: DoublePointers.o DPLinkedList.o
	$(CXX) $(CXXFLAGS) DoublePointers.o DPLinkedList.o -o output.out

DPLinkedList.o: DPLinkedList.cpp
	$(CXX) $(CXXFLAGS) -c DPLinkedList.cpp
	
DoublePointers.o: DoublePointers.cpp
	$(CXX) $(CXXFLAGS) -c DoublePointers.cpp

clean:
	rm -rf *.o
	rm -f *.out
	rm -f *~*.h.gch *#[

run:
	./output.out