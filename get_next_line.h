/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:15:16 by etisha            #+#    #+#             */
/*   Updated: 2021/11/09 17:15:28 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 210
# endif

char	*get_next_line(int fd);
char	*ft_read_file(char *line, char *reminder, int fd);
char	*ft_find_line(char *reminder);
void	ft_new_reminder(char *reminder);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
char	*ft_free_reminder(char *reminder);
char	*ft_copy_in_line(char *line, char *reminder);
char	*ft_copy_from_read(char *line, char *reminder);

#endif
