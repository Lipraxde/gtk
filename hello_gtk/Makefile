SRC = gtk_hello.c
OUT_DIR = _build/
OUT = $(OUT_DIR)gtk_hello

all: $(SRC) $(OUT_DIR)
	gcc $(SRC) -o $(OUT) `pkg-config gtk+-2.0 --cflags --libs`

$(OUT_DIR):
	mkdir -p $(OUT_DIR)

clean:
	rm -rf $(OUT_DIR)
