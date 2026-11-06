CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -g -fsanitize=address -Iinclude
TARGET = program
SOURCES = $(wildcard src/*.c)
OBJECTS = $(SOURCES:.c=.o)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

src/%.o: src/%.c $(wildcard include/*.h)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: clean