/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:26:13 by lperalta          #+#    #+#             */
/*   Updated: 2025/05/08 13:04:00 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		if (*s != c && (s[1] || s[1] == c))
			words ++;
		s++;
	}
	return (words);
}

static char	**mok(int words)
{
	char	**split; 
	
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	split[words] = NULL;
	return (split);
}

static void	**freemem(char *split, int x)
{
	while (x --)
		free(split[x]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		wcnt;
	int		ccnt;
	char	**str;

	str = mok(ft_wordcount(s, c));
	if (!str)
		return (NULL);
	wcnt = 0;
	while (s[wcnt])
	{
		if (*s != c)
		{
			ccnt = 0;
			while (s[ccnt] && s[ccnt] != c)
				ccnt ++;
			str[wcnt] = ft_substr(s, 0, ccnt);
			if (!str[wcnt])
				return (freemem(str, wcnt));
			s += ccnt;
			wcnt ++;
		}
		else
			s ++;
	}
	return (str);
}

/*int main()
{
	char *str = "HOla  mundo  cruel";
	char **final = ft_split(str, ' ');
	int i = 0;
	if (!final)
		return(NULL);
	while (final[i])
	{
		printf("%s\n", final[i]);
		free(final[i]);
		i++;
	}
	return(0);
}
*/
