NAME = libft.a

SRCS =  ft_memset.c ft_memmove.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_isalpha.c ft_isdigit.c ft_atoi.c ft_strrchr.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strnstr.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_strdup.c ft_calloc.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c ft_strjoin.c ft_strtrim.c ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_putendl_fd.c ft_split.c libft.h
OBJC = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJC)
	ar rcs $(NAME) $(OBJC) $?

%.o: %.c libft.h
	gcc $(FLAGS) -c $< -o $@
clean:
	rm -rf *.o 
fclean: clean
	rm -rf $(NAME) *.o
re: fclean all

# el: $(NAME)
# 	gcc $(FLAGS) $(NAME) public_main.c