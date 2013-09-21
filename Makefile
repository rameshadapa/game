PROJ_NAME=game
SRC_DIR=src

OBJS= $(SRC_DIR)/main.o	\

CC=gcc

all: $(PROJ_NAME) $(OBJS)

$(PROJ_NAME): $(OBJS)
	$(CC) -o $@ $^ `pkg-config --libs --cflags elementary`

%.o: %.c
	$(CC) -c -o $@ $< `pkg-config --libs --cflags elementary`

clean:
	rm $(OBJS) 

