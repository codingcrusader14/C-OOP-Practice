#Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++20 -Wall -O2

# Target executable
TARGET = userInterface

# Source files
SOURCES = Employee.cpp Database.cpp userInterface.cpp 


# Build the executable
$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

# Clean up build files
clean:
	rm -f $(TARGET)
