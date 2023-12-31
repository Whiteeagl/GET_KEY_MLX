NAME	= get_key
FILES	= ./DESIGN_PATTERN/design_p_modif_keys.c			\
			./DESIGN_PATTERN/design_p_min_letters.c			\
			./DESIGN_PATTERN/design_p_keycode.c				\
			./DESIGN_PATTERN/design_p_mlx.c					\
			./DESIGN_PATTERN/design_p_modif_keys2.c			\
			./OTHER_STUFF/utils.c							\
			./ERRORS_STUFF/free_all_memory.c				\
			./INIT_STUFF/init_all_gk_stuff.c				\
			./GARBAGE_COLLECTOR/garbage_malloc.c			\
			./GARBAGE_COLLECTOR/chain_list_garbage_malloc.c	\
			./KEY_ID/KEY_ID_MODIF/alpha_Q/modif_key_Q.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_N/modif_key_N.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_J/modif_key_J.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_I/modif_key_I.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_G/modif_key_G.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_D/modif_key_D.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_L/modif_key_L.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_M/modif_key_M.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_X/modif_key_X.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_Z/modif_key_Z.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_V/modif_key_V.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_P/modif_key_P.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_Y/modif_key_Y.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_T/modif_key_T.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_E/modif_key_E.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_K/modif_key_K.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_W/modif_key_W.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_U/modif_key_U.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_B/modif_key_B.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_A/modif_key_A.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_R/modif_key_R.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_C/modif_key_C.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_H/modif_key_H.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_S/modif_key_S.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_O/modif_key_O.c		\
			./KEY_ID/KEY_ID_MODIF/alpha_F/modif_key_F.c		\
			./KEY_ID/KEY_ID_MIN/min_key_id_p_to_t.c			\
			./KEY_ID/KEY_ID_MIN/min_key_id_k_to_o.c			\
			./KEY_ID/KEY_ID_MIN/min_key_id_u_to_y.c			\
			./KEY_ID/KEY_ID_MIN/min_key_id_z.c				\
			./KEY_ID/KEY_ID_MIN/min_key_id_f_to_j.c			\
			./KEY_ID/KEY_ID_MIN/min_key_id_a_to_e.c			\
			./KEY_ID/KEY_ID_MAJ/maj_key_id_A_to_E.c			\
			./KEY_ID/KEY_ID_MAJ/maj_key_id_F_to_J.c			\
			./KEY_ID/KEY_ID_MAJ/maj_key_id_U_to_Y.c			\
			./KEY_ID/KEY_ID_MAJ/maj_key_id_Z.c				\
			./KEY_ID/KEY_ID_MAJ/maj_key_id_P_to_T.c			\
			./KEY_ID/KEY_ID_MAJ/maj_key_id_K_to_O.c			\
			./KEY_PRESS_RELEASE/key_combo.c					\
			./KEY_PRESS_RELEASE/key_press_release.c			\
			#./KEY_PRESS_RELEASE/min_letters.c				\
			#./KEY_PRESS_RELEASE/maj_letters.c				\
			#./KEY_PRESS_RELEASE/modif_keys.c

MLX_GIT_REPO = https://github.com/42Paris/minilibx-linux.git
MLX_DIR      = Mlx

FLAGS    = -Wall -Wextra -Werror -g3 -O0 -std=c99
MLXFLAGS = -L../Mlx -lmlx -L/usr/include/../lib -lXext -lX11 -lm -lbsd
CC       = gcc

SRCS := $(wildcard ./*.c)
OBJS := $(FILES:.c=.o)

# Dependencies
DEPS := $(OBJS:.o=.d)
-include $(DEPS)

%.o: %.c
	$(CC) $(FLAGS) -MMD -c $< -o $@

all: $(NAME)

$(NAME): check_git_repo $(OBJS)
	$(MAKE) -s -C ../Mlx/
	ar rc $(NAME).a $(OBJS)
	ranlib $(NAME).a

exec: $(NAME)
	gcc $(FLAGS) -c main.c -o main.o
	gcc $(FLAGS) main.o $(NAME).a $(MLXFLAGS) -o $(NAME)

clean:
	rm -f $(OBJS) $(DEPS)
	rm -f main.o

fclean: clean
	rm -f $(NAME).a $(NAME)

re: fclean all

.PHONY: all

check_git_repo:
	@if [ ! -d "$(MLX_DIR)/.git" ]; then \
		echo "Cloning Git repository..."; \
		git clone $(MLX_GIT_REPO) ../$(MLX_DIR) || true; \
	fi
