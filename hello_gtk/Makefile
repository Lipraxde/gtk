OUT_DIR = _build/
SRC_DIR = ./

SRCS += $(SRC_DIR)gtk_hello.c
SRCS += $(SRC_DIR)test.c

OBJS := $(SRCS:$(SRC_DIR)%.c=$(OUT_DIR)%.o)
OUT   = $(OUT_DIR)gtk_hello

CFLAGS += `pkg-config gtk+-2.0 --cflags --libs`
DEBUG_FLAG += -g

.PHONY : all clean

all: $(OUT_DIR) $(OUT)

$(OUT): $(OBJS)
	$(CC) $^ $(CFLAGS) -o $(OUT)

$(OBJS): $(OUT_DIR)%.o : $(SRC_DIR)%.c
	$(CC) -c $< $(CFLAGS) $(DEBUG_FLAG) -o $@

$(OUT_DIR):
	mkdir -p $@

clean:
	rm -rf $(OUT_DIR)
