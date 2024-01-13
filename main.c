/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 23:26:40 by wolf              #+#    #+#             */
/*   Updated: 2024/01/13 20:17:07 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_key.h"

int	close_window(void *param)
{
	(void)param;
	free_all_memory_stuff("\nFin du programme avec la croix.");
	return (exit(0), 0);
}

/*

	You must create this function to link it to mlx_hook,
	Such as
		
		● 'mlx_hook(get_win_ptr(), 02, (1L << 0), key_center, NULL);'.
	
	Inside this function,
	You must necessarily call the following two functions: 
	
		● gk_update_keycode(int keycode);
		● gk_key_press(int keycode);

*/

int	key_center(int kc)
{
	gk_update_keycode(kc);
	gk_key_press(kc);

	if (k_min_a())
		u_write_msg_on_std(1, "a", false);

	if (gk_check_combo(K_ID_A, K_ID_CTRL))
		u_write_msg_on_std(1, "Ctrl + a", false);

	if (gk_check_combo(K_ID_A, K_ID_LSHIFT))
		u_write_msg_on_std(1, "A", false);

	if (k_escape())
		free_all_memory_stuff("\nFermeture par la touche Escape");
	return (0);
}

int	main(void)
{
	void	*mlx_ptr;
	void	*win_ptr;

	mlx_ptr = mlx_init();
	if (!mlx_ptr)
		return (free_all_memory_stuff("main"), 1);
	win_ptr = mlx_new_window(mlx_ptr, 500, 500,
			"Détection de touches / touches combo minilibX");
	if (!win_ptr)
		return (free_all_memory_stuff("main"), 2);
	update_mlx_infos(mlx_ptr, win_ptr, NULL);
	get_key_init();
	mlx_hook(get_win_ptr(), 02, (1L << 0), key_center, NULL);
	mlx_hook(get_win_ptr(), 03, (1L << 1), gk_key_release, NULL);
	mlx_hook(get_win_ptr(), 17, 0, close_window, NULL);
	mlx_loop(get_mlx_ptr());
	return (0);
}
