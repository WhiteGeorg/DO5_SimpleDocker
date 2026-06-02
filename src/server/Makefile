CC = gcc
CFLAGS = -Wall -Wextra -O2
LIBS = -lfcgi
TARGET = server.fcgi
SOURCE = main.c
PORT = 8080

all: build

install-deps:
	sudo apt-get update
	sudo apt-get install -y libfcgi-dev spawn-fcgi

build: $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE) $(LIBS)

start: build
	@if pgrep -f $(TARGET) > /dev/null; then \
		echo "Server already running"; \
		exit 1; \
	fi
	spawn-fcgi -p $(PORT) -n ./$(TARGET) &

start-fg: build
	spawn-fcgi -p $(PORT) -n ./$(TARGET)

stop:
	@pkill -f $(TARGET) || echo "Server not running"

restart: stop start

clean:
	rm -f $(TARGET)

.PHONY: all install-deps build start start-fg stop restart clean