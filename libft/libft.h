/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danylokondysiuk <danylokondysiuk@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 19:54:35 by dkondysi          #+#    #+#             */
/*   Updated: 2025/11/17 19:35:08 by danylokondy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int	ft_isalpha(int dan);
int	ft_isalnum(int dan);
int	ft_isascii(int dan);
int	ft_isigit(int dan);
int ft_isprint(int dan);
int	ft_toupper(int dan);
int	ft_tolower(int dan);
size_t	ft_strlen(const char *dan);
void	*ft_memset(void *dany, int dan, size_t len);

#endif