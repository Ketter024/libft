NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
      ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
      ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
      ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
      ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \

#fichiers .c en fichiers objets .o
OBJS = ${SRCS:.c=.o}

# Commandes
all: $(NAME)

#Création de la bibliothèque
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compilation des fichiers o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

