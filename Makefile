NAME = libmx.a
SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c,obj/%.o,$(SRC))

CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

obj/%.o: src/%.c
	@mkdir -p obj
	$(CC) $(CFLAGS) -Iinc -o $@ -c $<

clean:
	rm -rf obj

uninstall: clean
	rm -rf $(NAME)

reinstall: uninstall all


.PHONY: all clean uninstall reinstall

