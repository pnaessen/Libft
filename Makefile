# Nom de la bibliothèque
NAME = libft.a

# Dossier des fichiers source
SRCDIR = src

# Dossier des fichiers objets
OBJDIR = obj

# Liste des fichiers sources (.c) dans le dossier src
SRC = $(wildcard $(SRCDIR)/*.c)

# Création des fichiers objets à partir des fichiers source
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Compilateur et options
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

# Commande pour créer la bibliothèque
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Pour créer les fichiers objets, on utilise les fichiers sources
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Commande pour nettoyer les fichiers objets
clean:
	rm -rf $(OBJDIR)

# Commande pour supprimer les fichiers objets et la bibliothèque
fclean: clean
	rm -f $(NAME)

# Commande pour recompiler tout
re: fclean $(NAME)

# Commande pour tester la bibliothèque (optionnel)
# .PHONY permet de ne pas créer de fichier avec ce nom
.PHONY: all clean fclean re
