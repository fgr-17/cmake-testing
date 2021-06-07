APP=app
SDK_FOLDER=../external-lib
CFLAGS=-Wall
DEPS= example/Example.cpp  ${SDK_FOLDER}/complex/complex.cpp ${SDK_FOLDER}/points/points.c
# if the folders are added in this INC, not need to use "" on #includes
INC=-I./example -I../external-lib/complex -I../external-lib/points

.PHONY: all clean 

all: Example.o complex.o points.o
	$(CXX) -o $(APP) main.cpp $^ ${INC}

Example.o: example/Example.cpp complex.o points.o
	$(CXX) -c -o $@ $^ ${INC}

complex.o:  ${SDK_FOLDER}/complex/complex.cpp
	$(CXX) -c -o $@ $^ ${INC}

points.o: ${SDK_FOLDER}/points/points.c
	$(CC) -c -o $@ $^ ${INC}

clean:

	rm -rf *.o $(APP)