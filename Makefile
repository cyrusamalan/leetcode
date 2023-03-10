# Define the compiler and flags
CC = gcc
CFLAGS = -Wall -Werror

# Define the source files and the corresponding executable names
SOURCES = $(wildcard *.c)
EXECUTABLES = $(SOURCES:%.c=%)

# Default rule
all: $(EXECUTABLES)

# Rule to build an executable from a specific .c file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to link an executable from object files
%: %.o
	$(CC) $(CFLAGS) $^ -o $@

# Rule to clean up the object files and executables
clean:
	rm -f $(EXECUTABLES) *.o
