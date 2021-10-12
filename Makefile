NAME = libft.a
FLAGS = -Wall -Wextra -Werror
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

SOURCES_BONUS = ft_atoi.c\
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
				ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstiter.c\
				ft_lstclear.c\
				ft_lstdelone.c\
				ft_lstmap.c


OBJECTS = $(SOURCES:%.c=%.o)
OBJECTS_BONUS = $(SOURCES_BONUS:%.c=%.o)
all : $(NAME) libft.h
$(NAME)	: $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
# .c.o : 
# 	gcc $(FLAGS) -c $(SOURCES)
clean : $(SOURCES)
	rm -f $(OBJECTS)
fclean :
	rm -f $(NAME)
re : fclean clean all
bonus : $(NAME) $(OBJECTS_BONUS) libft_bonus.h
	ar rcs $(NAME) $(OBJECTS_BONUS)
clean_bonus :
	rm -f $(OBJECTS_BONUS)
.PHONY: all clean fclean re bonus clean_bonus