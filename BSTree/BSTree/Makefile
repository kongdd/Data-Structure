

# the compiler: gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall -fexec-charset=GBK

# the build target executable:
TARGET = BSTree.exe

all: 
	$(CC) $(CFLAGS) -c BSTree.cpp -o BSTree.o
	$(CC) $(CFLAGS) -o $(TARGET) BSTree.o
	./$(TARGET)

clean:
	$(RM) $(TARGET) *.o

# $@    the file name of the target
# $<    the name of the first prerequisite (i.e., dependency)
# $^    the names of all prerequisites (i.e., dependencies)
# $(@D)    the directory part of the target
# $(@F)    the file part of the target
# $(<D)    the directory part of the first prerequisite (i.e., dependency)
# $(<F)    the file part of the first prerequisite (i.e., dependency)
