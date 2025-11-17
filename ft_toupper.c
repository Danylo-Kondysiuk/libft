/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danylokondysiuk <danylokondysiuk@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:05:49 by dkondysi          #+#    #+#             */
/*   Updated: 2025/11/17 19:00:06 by danylokondy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function converts a lower-case letter to the corresponding upper-case letter and return this value*/

int	ft_toupper(int dan)
{
	if (dan >= 'a' && dan <= 'z')
		return (dan - 32);
	return (dan);
}
