APP=app

DEPS= example/Example.cpp 
# if the folders are added in this INC, not need to use "" on #includes
INC=-I./example -I../external-lib

.PHONY: clean

all:
	$(CXX) -o $(APP) main.cpp ${DEPS} ${INC}

clean:

	rm -rf *.o $(APP)