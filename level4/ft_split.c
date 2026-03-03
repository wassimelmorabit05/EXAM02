#include <stdlib.h>
int if_space(char c)
{
    if (c == ' ' || c == '\t' || c == '\n')
        return (1);
    return (0);
}

int count_word(char *str)
{
    int count = 0;

    while (*str && if_space(*str))
        str++;
    while (*str)
    {
        if (*str && !if_space(*str))
            str++;
        count++;
        str++;
    }
    return (count);
}

char *malloc_word(char *str)
{
    char *word;
    int i = 0;

    while (str[i] && !if_space(str[i]))
        i++;
    word = malloc (i + 1);
    i = 0;
    while(str[i] && !if_space(str[i]))
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}
char    **ft_split(char *str)
{
    char **arr;
    int i = 0;

    arr = (char **)malloc(sizeof(char *) * (count_word(str)+1));
    if (!arr)
        return (NULL);
    while (*str)
    {
        while (*str && if_space(*str))
            str++;
        if (*str && !if_space(*str))
        {
            arr[i] = malloc_word(str);
            i++;
            while (*str && !if_space(*str))
                str++;
        }
    }
    arr[i] = NULL;
    return (arr);
}

#include <stdio.h>

int		main(int ac, char **av)
{
	char **arr;

	char *phrase = "   Hello,   Flavio\t Wuensche!  ";
	arr = ft_split(phrase);
	printf("%s\n", arr[0]);
	printf("%s\n", arr[1]);
	printf("%s\n", arr[2]);
	printf("%s\n", arr[3]);
}