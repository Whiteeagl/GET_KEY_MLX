/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:59:35 by wolf              #+#    #+#             */
/*   Updated: 2023/12/30 00:26:15 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OTHER_UTILS_H
# define OTHER_UTILS_H

//void	u_inster_to(char **str1, char *to_insert);
void	u_write_msg_on_std(int fd, char *msg, bool endline);
int		pstd(char *msg);

#endif