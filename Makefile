

SRCS_CLIENT            = client.c

OBJS_CLIENT            = $(SRCS_CLIENT:.c=.o)

SRCS_SERVER            = server.c

OBJS_SERVER            = $(SRCS_SERVER:.c=.o)

SRCS_CLIENT_BONUS            = client_bonus.c

OBJS_CLIENT_BONUS            = $(SRCS_CLIENT_BONUS:.c=.o)

SRCS_SERVER_BONUS             = server_bonus.c

OBJS_SERVER_BONUS            = $(SRCS_SERVER_BONUS:.c=.o)

CC              = cc

RM              = rm -f

CFLAGS          =  -g -Wall -Wextra -Werror

LIBFT			= ./Libft/libft.a

NAME_CLIENT            = client

NAME_SERVER            = server

NAME_CLIENT_BONUS      = client_bonus

NAME_SERVER_BONUS      = server_bonus

all:            $(NAME_CLIENT)  $(NAME_SERVER)

client:			$(NAME_CLIENT)

server:			$(NAME_SERVER)

$(LIBFT):	
	$(MAKE) -C ./libft

$(NAME_CLIENT):        $(OBJS_CLIENT) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME_CLIENT) $(OBJS_CLIENT) $(LIBFT)

$(NAME_SERVER):        $(OBJS_SERVER) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME_SERVER) $(OBJS_SERVER) $(LIBFT)

$(NAME_CLIENT_BONUS):        $(OBJS_CLIENT_BONUS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME_CLIENT_BONUS) $(OBJS_CLIENT_BONUS) $(LIBFT)

$(NAME_SERVER_BONUS):        $(OBJS_SERVER_BONUS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME_SERVER_BONUS) $(OBJS_SERVER_BONUS) $(LIBFT)

clean:
	$(RM) $(OBJS_CLIENT) $(OBJS_SERVER) $(OBJS_CLIENT_BONUS) $(OBJS_SERVER_BONUS)

fclean:         clean
	$(RM) $(NAME_CLIENT) $(NAME_SERVER) $(NAME_CLIENT_BONUS) $(NAME_SERVER_BONUS)

re:             fclean $(NAME_CLIENT) $(NAME_SERVER) $(NAME_CLIENT_BONUS) $(NAME_SERVER_BONUS)

bonus:			$(NAME_CLIENT_BONUS) $(NAME_SERVER_BONUS)

client_bonus:			$(NAME_CLIENT_BONUS)

server_bonus:			$(NAME_SERVER_BONUS)

.PHONY:         all clean fclean re 
