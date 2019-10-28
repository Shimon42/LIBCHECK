NAME	= libft.a
INCLUDEPATH = includes/
SRCS	=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_putstr.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c

SRCSBNS	=	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g3
RM		= rm -f
OBJS	= ${SRCS:.c=.o}
OBJSBNS	= ${SRCSBNS:.c=.o}
INCLUDES =	libft.h

all:		$(NAME) $(INCLUDES)

$(NAME): 	$(OBJS) $(INCLUDES)
			ar rc $(NAME) $(OBJS)

compil:		all
			$(CC) $(CCFLAGS) $(SRCS) main.c -i libft.a

$(OBJS):	$(INCLUDES)

bonus:		$(OBJS) $(OBJSBNS) $(INCLUDES)
			ar rc $(NAME) $(OBJS) $(OBJSBNS)

$(OBJSBNS):	$(INCLUDES)

clean:		
			${RM} $(OBJS) $(OBJSBNS)

fclean:		clean
			${RM} $(NAME)
			
re:			fclean all

sanitize:	$(OBJS)
			$(CC) $(CFLAGS) -g3 -fsanitize=address -o $(NAME) $(OBJS)

.PHONY: all clean fclean re