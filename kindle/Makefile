OUT_DIR = _build/
SRC_DIR = ./

SRCS += $(SRC_DIR)gtk_hello.c

OBJS := $(SRCS:$(SRC_DIR)%.c=$(OUT_DIR)%.o)
OUT   = $(OUT_DIR)gtk_hello

CC = $(HOME)/opt/cross-gcc-linaro/bin/arm-linux-gnueabi-gcc
KINDLE_ROOT = $(HOME)/kindle/kindle_root/

CFLAGS += `pkg-config gtk+-2.0 --cflags --libs`
LDFLAGS += -Wl,-rpath,$(KINDLE_ROOT)usr/lib -L$(KINDLE_ROOT)usr/lib
DEBUG_FLAG += -g

.PHONY : all kindle clean

all: $(OUT_DIR) $(OUT)

$(OUT): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $(OUT)

$(OBJS): $(OUT_DIR)%.o : $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $(DEBUG_FLAG) -c $< -o $@

$(OUT_DIR):
	mkdir -p $@

clean:
	rm -rf $(OUT_DIR)
