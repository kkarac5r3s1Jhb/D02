/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 08:23:21 by kkara             #+#    #+#             */
/*   Updated: 2020/07/09 08:37:39 by kkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_is_negative(int n) 
{
	
	if (n >= 0) 
	{
		ft_putchar('P');
	}
	else 
	{
		ft_putchar('N');
	}
 }

