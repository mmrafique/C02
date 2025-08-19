/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhmajee <muhmajee@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:15:39 by muhmajee          #+#    #+#             */
/*   Updated: 2025/08/19 14:15:39 by muhmajee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	ft_isalnum(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_word;

	is_word = 1;
	i = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]))
		{
			if (is_word && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!is_word && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			is_word = 0;
		}
		else if (!ft_isalnum(str[i]) && !ft_isalpha(str[i]))
			is_word = 1;
		else
			is_word = 0;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char a[] = "Salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(a));
	return (0);
}*/
