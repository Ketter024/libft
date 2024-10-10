# Nom de la bibliothèque
NAME = libft.a

# Compilateur et flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./

# Fichiers source définis
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
      ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
      ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
      ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
      ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
      ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
      ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c ft_striteri.c

# Groupes de fichiers sources
SRCS = ${LIBC}

# Transformation des fichiers .c en fichiers objets .o
OBJS = ${SRCS:.c=.o}

# Commandes
all: $(NAME)

# Création de la bibliothèque avec les fichiers objets de base
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compilation des fichiers objets
%.o: %.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $(OBJDIR)/$@

# Nettoyage des fichiers objets
clean:
	rm -rf $(OBJDIR)

# Nettoyage des fichiers objets et de la bibliothèque
fclean: clean
	rm -f $(NAME)

# Recompilation complète
re: fclean all

.PHONY: all clean fclean re
