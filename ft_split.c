/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:20:41 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/17 20:51:25 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Fonction pour copier une chaîne dans un tableau, on recoit la chaine, la taille memoire du mot , sa premiere et dernier lettre
//tant que on a pas ecrit le mot on copier dans la tailler memoire de celui ci en partant de sa premier position(lettre) ect ect
//et on le renvoie pour le mettre dans le tab qui augmentera de taille en fonction du nombre de mot
char	*fill(char const *s, char *mot, int first, int last)
{
	size_t	j;

	j = 0;
	while (first < last)
	{
		mot[j] = s[first];
		j++;
		first++;
	}
	mot[j] = '\0';
	return (mot);
}
// Fonction pour liberer de la memoire (free) en fonction de 'n' element dans le tab envoyer (au cas ou l alloc foire)
void	safefree(char **tab, size_t n) 
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
// Fonction qui capte le debut et la fin d un mot (i et j) pour ensuite allouer de la memoire dans 'mot' avc ft_calloc
//si l allocation foire faut liberer ^^ et return NULL , puis on copier la chaine dans le tableau grace a i et j(on a le mot)
//puis on passe au prochain ect et on renvoie le tableau complet une fois que n >= nbr de mot
char	**allmot(char **tab, char const *s, char c,
		size_t motcount)
{
	size_t	i;
	size_t	n;
	int		j;
	char	*mot;

	i = 0;
	n = 0;
	while (s[i] && n < motcount)
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		mot = ft_calloc((i - j) + 1, sizeof(char));// fin - debut = taille du mot
		if (!mot)
		{
			safefree(tab, n);// Libérer la mémoire et retourner NULL
			return (NULL);
		}
		tab[n] = fill(s, mot, j, i);
		n++;
	}
	tab[n] = '\0';
	return (tab);
}
// Fonction pour compter le nombre de mots dans une chaîne, si la pos est == au separateur on skip jusqu a rencontrer une lettre aka le mot
//et on continue jusqu a rencontrer un sep et grace a ca on a le nbr de mot que l on renvoie ensuite pour cree de 
//l espace memoire
size_t	countmot(char const *s, char c)
{
	size_t	mot;
	int		i;

	mot = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			mot++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (mot);
}
// Fonction pour spliter une chaîne en un tableau de chaînes
char	**ft_split(char const *s, char c)
{
	int		mot;
	char	**tab;

	mot = 0;
	if (!s)
		return (NULL);
	mot = countmot(s, c);
	tab = ft_calloc(mot + 1, sizeof(char *));// calloc mieux mais pas tres bien compris pourquoi malloc faut des trcu mzi
	if (!tab)
		return (NULL);
	allmot(tab, s, c, mot);
	return (tab);
}

int	main(void)
{
	char	**tabarnak;
	int		i;
    i = 0;
	tabarnak = ft_split("hahaahah kekekeke ll       oui", ' ');
	while (tabarnak[i])
	{
		printf("%s\n", tabarnak[i]);
		i++;
	}
	return (0);
}
