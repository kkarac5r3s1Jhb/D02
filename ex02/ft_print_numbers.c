/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:41:48 by kkara             #+#    #+#             */
/*   Updated: 2020/07/08 16:18:57 by kkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char c);

void ft_print_numbers(void) 
{
	char numbers;
	
	numbers = '0';

	while(numbers <='9') 
	{
		ft_putchar(numbers);
		numbers ++; 
	}
}
		
