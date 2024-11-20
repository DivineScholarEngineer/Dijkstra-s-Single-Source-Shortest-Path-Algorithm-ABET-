CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC = Main.cpp Edge.cpp Vertex.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = project2

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
