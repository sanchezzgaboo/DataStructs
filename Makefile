CXX = g++
CXXFLAGS = -Wall $(INCLUDES)

# Automatically collect all include subdirectories
INCLUDES = $(foreach dir,$(wildcard Include/*),-I$(dir)) -IInclude

# Collect sources (all .cpp in src/ and subfolders)
SRC = $(wildcard src/*.cpp src/*/*.cpp)

# Map .cpp → obj/*.o
OBJ = $(patsubst src/%,obj/%,$(SRC:.cpp=.o))

TARGET = program.exe

all: $(TARGET)

# Link final program
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $@

# Compile rule
obj/%.o: src/%.cpp
	@if not exist "$(dir $@)" mkdir "$(dir $@)"
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	@if exist $(TARGET) del /Q $(TARGET)
	@if exist obj rmdir /S /Q obj
