SRC = gtk_hello.c
OUT = _build/gtk_hello

all: $(SRC)
	gcc $(SRC) -o $(OUT) `pkg-config gtk+-2.0 --cflags --libs`

clean:
	rm $(OUT)
