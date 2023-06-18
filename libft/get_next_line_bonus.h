/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:05:05 by frushiti          #+#    #+#             */
/*   Updated: 2023/03/12 18:09:48 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 225
# endif

char	*get_next_line(int fd);

int		ft_strlen(char *str);

char	*ft_strdup(char *src);

char	*ft_strcat(char *dest, char *src);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strchr(const char *src, int c);

#endif
