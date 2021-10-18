NAME = libft.a
FLAGS = -Wall -Wextra -Werror
HEADER = libft.h
SOURCES = ft_atoi.c\
 		  ft_bzero.c\
          ft_toupper.c\
   		  ft_isalnum.c\
          ft_strlcpy.c\
          ft_isalpha.c\
          ft_strlcat.c\
          ft_isascii.c\
          ft_isdigit.c\
          ft_islower.c\
          ft_isprint.c\
          ft_isupper.c\
          ft_memmove.c\
          ft_memcpy.c\
          ft_memset.c\
          ft_strlen.c\
		  ft_toupper.c\
		  ft_tolower.c\
		  ft_strchr.c\
		  ft_strrchr.c\
		  ft_strncmp.c\
		  ft_strnstr.c\
		  ft_memchr.c\
		  ft_memcmp.c\
		  ft_calloc.c\
		  ft_strdup.c\
		  ft_substr.c\
		  ft_strjoin.c\
		  ft_strtrim.c\
		  ft_split.c\
		  ft_itoa.c\
		  ft_strmapi.c\
		  ft_striteri.c\
		  ft_putchar_fd.c\
		  ft_putendl_fd.c\
		  ft_putstr_fd.c\
		  ft_putnbr_fd.c\

SOURCES_BONUS = ft_lstnew_bonus.c\
				ft_lstadd_front_bonus.c\
				ft_lstsize_bonus.c\
				ft_lstlast_bonus.c\
				ft_lstadd_back_bonus.c\
				ft_lstiter_bonus.c\
				ft_lstclear_bonus.c\
				ft_lstdelone_bonus.c\
				ft_lstmap_bonus.c


OBJECTS = $(SOURCES:%.c=%.o)
OBJECTS_BONUS = $(SOURCES_BONUS:%.c=%.o)
$(NAME): all
all : .c.o
	ar rcs $(NAME) $(OBJECTS)
	ranlib $(NAME)
.c.o : 
	gcc $(FLAGS) -c $(SOURCES) -I $(HEADER)
.c.o_bonus :
	gcc $(FLAGS) -c $(SOURCES_BONUS) -I $(HEADER)
clean : $(SOURCES)
	rm -f $(OBJECTS)
fclean :
	rm -f $(NAME)
re : fclean clean all
bonus :  .c.o_bonus
	ar rcs $(NAME) $(OBJECTS_BONUS)
	ranlib $(NAME)
clean_bonus :
	rm -f $(OBJECTS_BONUS)
.PHONY: all clean fclean re bonus clean_bonus
