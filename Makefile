PROJ_NAME=game
PROJ_DIR=.
SRC_DIR=$(PROJ_DIR)/src
INCLUDE_DIR=$(PROJ_DIR)/include
DATA_DIR=$(PROJ_DIR)/data

OBJS= $(SRC_DIR)/main.o	\
	$(SRC_DIR)/game.o	\
	$(SRC_DIR)/food.o	\
	$(SRC_DIR)/snake.o	\

EDJS= $(DATA_DIR)/edje/layout.edj	\

CC=gcc
CFLAGS= `pkg-config --cflags elementary` -I$(INCLUDE_DIR)
LIBS=`pkg-config --libs elementary`

EDJCC=edje_cc

all: $(PROJ_NAME) $(OBJS) $(EDJS)

$(PROJ_NAME): $(OBJS)
	@echo "Linking library..."
	@$(CC) -o $@ $^ $(LIBS)

%.o: %.c
	@echo "CC	$<"
	@$(CC) -c -o $@ $< $(CFLAGS)

%.edj: %.edc
	@echo "EDJE_CC	$<"
	@$(EDJCC) $<

clean:
	@echo "Removing binary..."
	@rm -f $(PROJ_NAME)
	@echo "Removing .edj files..."
	@rm -f $(EDJS)
	@echo "Removing objects..."
	@rm -f $(OBJS) 

