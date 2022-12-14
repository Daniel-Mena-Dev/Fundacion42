NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc
CLEAN = rm -Rf
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strlcpy.c ft_strrchr.c ft_strlcat.c ft_strncmp.c ft_strnstr.c ft_atoi.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c
OBJS := $(SRC:.c=.o)
DEX := $(SRC:.c=)
all: $(NAME)
$(NAME): %.o
	ar rcs $(NAME) $(OBJS)

%.o: 
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	$(CLEAN) $(OBJS)

fclean: clean
	$(CLEAN) $(NAME)
sclean:
	$(CLEAN) $(OBJS)
	$(CLEAN) $(DEX)

re: fclean all
.PHONY: all clean fclean re