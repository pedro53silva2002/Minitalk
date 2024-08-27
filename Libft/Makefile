

SRCS            =   ft_isalnum.c ft_isprint.c ft_memcmp.c \
			ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c\
			ft_memcpy.c ft_strchr.c ft_strlcpy.c \
			ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c \
			ft_memmove.c  ft_strlen.c  ft_strrchr.c \
			ft_toupper.c  ft_isdigit.c ft_memchr.c  ft_memset.c \
			ft_strdup.c ft_calloc.c ft_strmapi.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_putnbr_fd.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_striteri.c ft_itoa.c \
			ft_split.c \
			ft_printf_numlen.c ft_printf_putchar_fd.c ft_printf_puthex.c \
			ft_printf_putnbr_base.c ft_printf_putnbr_fd.c ft_printf_putptr.c \
			ft_printf_putstr_fd.c ft_printf_strlcpy.c ft_printf_strlen.c \
			ft_printf_strncmp.c ft_printf.c \
			get_next_line_utils.c get_next_line_utils_2.c get_next_line.c

OBJS            = $(SRCS:.c=.o)

SRCS_BONUS	=   ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
			ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
			ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

CC              = cc

RM              = rm -f

CFLAGS          = -Wall -Wextra -Werror

NAME            = libft.a

all:            $(NAME)

$(NAME):        $(OBJS) 
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:         clean
			$(RM) $(NAME)

re:             fclean $(NAME)

bonus:          $(OBJS) $(OBJS_BONUS)
			ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

.PHONY:         all clean fclean re bonus

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJS_BONUS)
