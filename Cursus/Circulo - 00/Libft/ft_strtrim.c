/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:08:03 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/19 13:15:12 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    if (!s1 || !set)
        return (NULL);
    size_t i = 0;
    size_t j = ft_strlen(s1);
    char *str;

    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    while (j > i && ft_strchr(set, s1[j - 1]))
        j--;
    str = (char *)malloc((j - i + 1) * sizeof(char));
    if (!str)
        return NULL;
    size_t k = 0;
    while (k < (j - i))
    {
        str[k] = s1[i + k];
        k++;
    }
    str[k] = '\0';
    return str;
}
/*
int main()
{
    char s1[] = "sdhola mdsdunsdto csomso ddestdas";
    char set[] = "sd";
    char *result = ft_strtrim(s1, set);
    printf("%s\n", result);
    free(result);
    return 0;
}
*/