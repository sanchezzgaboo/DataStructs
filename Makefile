CXX = g++
CXXFLAGS = -Wall $(INCLUDES)

# Add Include/ and its subdirectories
INCLUDES = -IInclude -IInclude/List -IInclude/Graph -IInclude/Tree

# Collect all .cpp files inside src/ and subfolders
SRC = $(wildcard src/*.cpp src/*/*.cpp)
OBJ = $(SRC:.cpp=.o)
TARGET = program

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $@

clean:
	del /Q $(OBJ) $(TARGET) 2>nul || true
