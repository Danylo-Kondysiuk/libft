/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 19:54:35 by dkondysi          #+#    #+#             */
/*   Updated: 2025/11/15 19:28:49 by dkondysi         ###   ########.fr       */
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

#endif