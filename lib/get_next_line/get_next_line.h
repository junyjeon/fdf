/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:15:52 by junyojeo          #+#    #+#             */
/*   Updated: 2023/03/13 18:09:03 by junyojeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1048576
# endif

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

char	*get_next_line(int fd);

size_t	ft_strlen2(const char *str);
char	*ft_strchr2(const char *s, int c);
char	*ft_strdup2(const char *s1);
char	*ft_substr2(char const *s, unsigned int start, size_t len);
char	*ft_strjoin2(char const *s1, char const *s2);

#endif
