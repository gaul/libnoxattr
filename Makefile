.PHONY: clean

CFLAGS = -fPIC -g -Wall
LDFLAGS = -shared

all:
	$(CC) $(CFLAGS) libnoxattr.c -o libnoxattr.so $(LDFLAGS)

# TODO
test: all
	./test.sh

clean:
	rm -f libnoxattr.so
