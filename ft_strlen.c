/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danylokondysiuk <danylokondysiuk@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:05:54 by dkondysi          #+#    #+#             */
/*   Updated: 2025/11/17 18:57:45 by danylokondy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function computes the length of the string and return the lenght
*/

size_t	ft_strlen(const char *dan)
{
    size_t index = 0;

    while (dan[index])
		index++;

	return (index);
}
