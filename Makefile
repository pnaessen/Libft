NAME:= libft.a
SRCS:= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
       ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
       ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
       ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	   ft_striteri.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	   ft_tools.c ft_tools2.c ft_printf.c get_next_line.c
ifdef BONUS
	SRCS:= $(SRCS) ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	   ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
  	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
endif

OBJDIR:= .obj
OBJS := $(addprefix $(OBJDIR)/, $(SRCS:%.c=%.o))
DEPS:= $(OBJS:%.o=%.d)

CC:= gcc
CFLAGS = -Werror -Wextra -Wall
CPPFLAGS = -MMD -MP
AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJDIR)/%.o: %.c libft.h
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

-include $(DEPS)

bonus:
	$(MAKE) BONUS=1 all


clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME) $(NAMEBONUS)

re: fclean
	make all

info:
	@echo "OBJS": $(OBJS)
	@echo "DEPS": $(DEPS)

.PHONY: all clean fclean re bonus