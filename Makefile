CXX := g++
CXXFLAGS := -O3 -march=native
all: mcsp

mcsp: mcsplit+LL.cpp graph.cpp graph.h
	$(CXX) $(CXXFLAGS) -Wall -std=c++11 -o mcsp+ll graph.cpp mcsplit+LL.cpp -pthread
