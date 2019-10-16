NAME	= libft.a
SRCSPATH	= 
INCLUDEPATH = includes/
SRCS	=	$(SRCSPATH)ft_atoi.c \
			$(SRCSPATH)ft_bzero.c \
			$(SRCSPATH)ft_calloc.c \
			$(SRCSPATH)ft_isalnum.c \
			$(SRCSPATH)ft_isalpha.c \
			$(SRCSPATH)ft_isascii.c \
			$(SRCSPATH)ft_isdigit.c \
			$(SRCSPATH)ft_isprint.c \
			$(SRCSPATH)ft_itoa.c \
			$(SRCSPATH)ft_memccpy.c \
			$(SRCSPATH)ft_memchr.c \
			$(SRCSPATH)ft_memcmp.c \
			$(SRCSPATH)ft_memcpy.c \
			$(SRCSPATH)ft_memmove.c \
			$(SRCSPATH)ft_memset.c \
			$(SRCSPATH)ft_putchar_fd.c \
			$(SRCSPATH)ft_putendl_fd.c \
			$(SRCSPATH)ft_putnbr_fd.c \
			$(SRCSPATH)ft_putstr_fd.c \
			$(SRCSPATH)ft_split.c \
			$(SRCSPATH)ft_strchr.c \
			$(SRCSPATH)ft_strdup.c \
			$(SRCSPATH)ft_strjoin.c \
			$(SRCSPATH)ft_strlcat.c \
			$(SRCSPATH)ft_strlcpy.c \
			$(SRCSPATH)ft_strlen.c \
			$(SRCSPATH)ft_strmapi.c \
			$(SRCSPATH)ft_strncmp.c \
			$(SRCSPATH)ft_strnstr.c \
			$(SRCSPATH)ft_strrchr.c \
			$(SRCSPATH)ft_strtrim.c \
			$(SRCSPATH)ft_substr.c \
			$(SRCSPATH)ft_tolower.c \
			$(SRCSPATH)ft_toupper.c

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
OBJS		= ${SRCS:.c=.o}
INCLUDES = libft.h

all:		$(NAME) $(INCLUDES)

$(NAME): 	$(OBJS) $(INCLUDES)
			ar rc $(NAME) $(OBJS)
			
clean:		
			${RM} $(OBJS)

fclean:		clean
			${RM} $(NAME)
			
re:			fclean all

sanitize:	$(OBJS)
			$(CC) $(CFLAGS) -g3 -fsanitize=address -o $(NAME) $(OBJS)

.PHONY: all clean fclean re