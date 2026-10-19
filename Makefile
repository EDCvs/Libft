# 1. Variable definitions

# Final static file name 
NAME	=		libft.a

CC		=		cc
CFLAGS	=		-Wall -Wextra -Werror

# The command used to generate a static library. r inserts files into the archive, c creates it if it doesn't exist, and s generates an index for rapid function access.
AR		=		ar rcs

RM		=		rm -f

# 2. Source and Object Files Tracking

SRCS	=		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c		\
				ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c			\
				ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c		\
				ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c		\
				ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c		\
				ft_atoi.c ft_calloc.c ft_strdup.c						\
				ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c		\
				ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c	\
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c			\
				ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c	\
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c			\
				ft_lstiter.c ft_lstmap.c

OBJS	=		$(SRCS:.c=.o)

# 3. Default Rule

all		:		$(NAME)

# 4. Linking Rule (Builds the static library using 'ar')

$(NAME)	:		$(OBJS)
	$(AR) $@ $^

# 5. Compilation Rule (Compiles individual .c files into .o files)

%.o		:		%.c
	$(CC) $(CFLAGS) -I. -c $< -o $@

# 6. Cleaning Rules
clean	:
	$(RM) $(OBJS)

fclean	:		clean
	$(RM) $(NAME)

# Re-build completely from scratch safely
re		:		fclean all

# 7. Phony Targets Declaration

.PHONY	:		all clean fclean re

test:
	$(CC) $(FLAGS) $(SRCS) test.c -o test