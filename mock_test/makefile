CC = g++
CFLAG = -c
LINK_FLAG = -Xlinker --wrap=malloc

INCLUDE_PATH=-I./

CXX_COMPILE = $(CC) $(INCLUDE_PATH) $(CFLAG) $< -o $@
CXX_LINK = $(CC) $(LINK_FLAG) $^ -o $@

test : test.o wrap_malloc.o real_malloc.o
	$(CXX_LINK)

%.o : %.cpp
	$(CXX_COMPILE)

clean : 
	rm *.o
	rm test
