APP=app
SDK_FOLDER=../external-lib
DEPS= example/Example.cpp  ${SDK_FOLDER}/complex/complex.cpp ${SDK_FOLDER}/points/points.c
# if the folders are added in this INC, not need to use "" on #includes
INC=-I./example -I../external-lib/complex -I../external-lib/points

.PHONY: all clean 

all: Example.o
	$(CXX) -o $(APP) main.cpp $^

Example.o: complex.o points.o
	$(CXX) -c -o $@ $^ ${INC}

complex.o: complex.cpp
	$(CXX) -c -o $@ $^ ${INC}

points.o: points.c
	$(CC) -c -o $@ $^ ${INC}

clean:

	rm -rf *.o $(APP)