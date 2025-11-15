/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:06:01 by dkondysi          #+#    #+#             */
/*   Updated: 2025/11/15 18:37:16 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	This code checks if the value is an alphabatic letter or not. 
	If the value is the alpabatic letter: it will return 1, otherwise 0
*/

int	ft_isigit(int dan)
{
	if(dan >= '0' && dan <= '9')
	{
		return(1);
	} 
	return(0);
}