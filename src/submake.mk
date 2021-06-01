APP=APP

all:
	$(CXX) -o $(APP) main.cpp Example.cpp

clean:
	rm -rf *.o $(APP)