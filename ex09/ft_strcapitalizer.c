/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalizer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhmajee <muhmajee@student.42barcelona.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-17 10:59:10 by muhmajee          #+#    #+#             */
/*   Updated: 2025-08-17 10:59:10 by muhmajee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int is_word;

	is_word = 1;
	i = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]))
		{
			if (is_word && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (!is_word && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			is_word = 0;
		}
		else
			is_word = 1;
		i++;
	}
	return (str);
}
