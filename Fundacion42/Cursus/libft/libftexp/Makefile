NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

CC = gcc

CLEAN = rm -Rf

SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strlcpy.c \
		ft_strrchr.c ft_strlcat.c ft_strncmp.c ft_strnstr.c ft_atoi.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c

SRCBONUS = ft_lstnew.c

OBJS := $(SRC:.c=.o)

OBJSBONUS := $(SRCBONUS:.c=.o)

DEX := 	$(SRC:.c=)

all:$(NAME)

$(NAME): %.o
	ar rcs $(NAME) $(OBJS)

%.o: 
	$(CC) $(CFLAGS) -c $(SRC)

bonus:	
		$(CC) -c $(CFLAGS) $(SRCBONUS)
		ar rcs $(NAME) $(OBJSBONUS)

clean:
			$(CLEAN) $(OBJS) $(OBJSBONUS)

fclean: 	clean
			$(CLEAN) $(NAME)

sclean:
			$(CLEAN) $(OBJS) $(OBJSBONUS)
			$(CLEAN) $(DEX)
			
re: fclean all	

.PHONY: all  clean fclean  bonus re