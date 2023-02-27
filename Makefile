CXX = g++
CXXFLAGS = -Wall -Wextra -g

all: HAMMING

HAMMING: main.o algo_hamming.o hamming_recursif.o Levenshtein_recursif.o Levenshtein_iteratif.o
	$(CXX) $(CXXFLAGS) -o $@ $^

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

algo_hamming.o: algo_hamming.cpp 
	$(CXX) $(CXXFLAGS) -c -o $@ $<
	
hamming_recursif.o: hamming_recursif.cpp 
	$(CXX) $(CXXFLAGS) -c -o $@ $<

Levenshtein_recursif.o: Levenshtein_recursif.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

Levenshtein_iteratif.o: Levenshtein_iteratif.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f HAMMING main.o algo_hamming.o hamming_recursif.o Levenshtein_recursif.o Levenshtein_iteratif.o
