# Compiler definition
CC = gcc
# Compiler flags - warnings all and include directory
CFLAGS = -Wall -I./include
# Directory structure
SRCDIR = src# Source code directory
OBJDIR = obj# Object files directory
BINDIR = bin# Binary output directory

# Debug build configuration
# Checks if DEBUG variable is set to 1 (make DEBUG=1)
ifeq ($(DEBUG),1)
    # Add debugging symbols and define DEBUG macro
    CFLAGS += -g -DDEBUG
    # Change binary output to debug folder
    BINDIR = bin/debug
else
    # Optimization level 2 for release builds
    CFLAGS += -O2
    # Change binary output to release folder
    BINDIR = bin/release
endif

# Auto-detect source files - finds all .c files in source directory
SRCS = $(wildcard $(SRCDIR)/*.c)
# Convert to object file paths - creates corresponding .o paths for each source file
OBJS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRCS))
# Define target executable name
TARGET = $(BINDIR)/myprogram

# Create necessary directories before compilation
$(shell mkdir -p $(OBJDIR) $(BINDIR))

# Default target - builds the program
all: $(TARGET)
# Linking rule - combines object files into final executable
$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)
# Compilation rule - compiles each .c file into a .o file
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) -c $< -o $@ $(CFLAGS)
# Clean target - removes all generated files
clean:
	rm -rf $(OBJDIR)/* $(BINDIR)/*
# Run target - executes the compiled program
run: $(TARGET)
	$(TARGET)
# Memory check target - runs Valgrind to detect memory leaks
memcheck: $(TARGET)
	valgrind --leak-check=full $(TARGET)
# Define phony targets (targets that don't represent files)
.PHONY: all clean run memcheck

