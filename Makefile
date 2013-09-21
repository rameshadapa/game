PROJ_NAME=game
PROJ_DIR=.
SRC_DIR=$(PROJ_DIR)/src
INCLUDE_DIR=$(PROJ_DIR)/include
DATA_DIR=$(PROJ_DIR)/data

OBJS= $(SRC_DIR)/main.o	\

EDJS= $(DATA_DIR)/edje/layout.edj	\

CC=gcc
CFLAGS= `pkg-config --cflags elementary` -I$(INCLUDE_DIR)
LIBS=`pkg-config --libs elementary`

EDJCC=edje_cc

all: $(PROJ_NAME) $(OBJS) $(EDJS)

$(PROJ_NAME): $(OBJS)
	$(CC) -o $@ $^ $(LIBS)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

%.edj: %.edc
	$(EDJCC) $<

clean:
	rm -f $(PROJ_NAME)
	rm -f *.o

