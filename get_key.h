/* ************************************************************************** */
/*																				           */
/*																    :::      ::::::::   */
/*   get_key.h												   :+:      :+:    :+:   */
/*																+:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>				     +#+  +:+       +#+        */
/*												         +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:59:45 by wolf				 #+#    #+#				*/
/*   Updated: 2023/12/31 19:11:58 by wolf				###   ########.fr       */
/*																				           */
/* ************************************************************************** */

#ifndef GET_KEY_H
# define GET_KEY_H

# define AND &&
# define OR  ||

// FOR better visibility
# define _AND_	&&
# define _OR_	||

# define GK_MIN_LETTERS	26
# define GK_MODIF_KEYS	16

# include <stdbool.h>
# include <stdio.h>

# include "../Mlx/mlx.h"
# include "DESIGN_PATTERN/design_pattern.h"
# include "GARBAGE_COLLECTOR/garbage_collector.h"
# include "ERRORS_STUFF/errors_stuff.h"
# include "OTHER_STUFF/other_utils.h"
# include "KEY_PRESS_RELEASE/key_press_release.h"
# include "INIT_STUFF/init_stuff.h"
# include "KEY_ID/key_id.h"

# define K_ID_A				97
# define K_ID_B				98
# define K_ID_C				99
# define K_ID_D				100
# define K_ID_E				101
# define K_ID_F				102
# define K_ID_G				103
# define K_ID_H				104
# define K_ID_I				105
# define K_ID_J				106
# define K_ID_K				107
# define K_ID_L				108
# define K_ID_M				109
# define K_ID_N				110
# define K_ID_O				111
# define K_ID_P				112
# define K_ID_Q				113
# define K_ID_R				114
# define K_ID_S				115
# define K_ID_T				116
# define K_ID_U				117
# define K_ID_V				118
# define K_ID_W				119
# define K_ID_X				120
# define K_ID_Y				121
# define K_ID_Z				122
				
/*

    Modification keys ID

*/

# define K_ID_RETURN		65293			// (Retour)
# define K_ID_ESCAPE		65307			// (Échap)
# define K_ID_BACKSPACE		65288			// (Retour arrière)
# define K_ID_TAB			65289			// (Tabulation)
# define K_ID_DELETE		65535			// (Supprimer)
# define K_ID_LEFT			65361			// (Flèche gauche)
# define K_ID_UP			65362			// (Flèche haut)
# define K_ID_RIGHT			65363			// (Flèche droite)
# define K_ID_DOWN			65364			// (Flèche bas)
# define K_ID_LSHIFT		65505			// (Majuscule gauche)
# define K_ID_RSHIFT		65506			// (Majuscule droite)
# define K_ID_CTRL			65507			// (Contrôle gauche)
# define K_ID_CTRR			65508			// (Contrôle droit)
# define K_ID_LALT			65513			// (Alt gauche)
# define K_ID_RALT			65027			// (Alt droit)
# define K_ID_SPACE			32				// (Espace)

#endif
