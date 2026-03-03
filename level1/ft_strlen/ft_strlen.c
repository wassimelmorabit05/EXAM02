int	ft_strlen(char *str)
{
    unsigned int length = 0;
    while(str[length])
        length++;
    return (length);
}

// int main()
// {
//     char *string = "123456789";
//     int len = ft_strlen(string);
//     printf("%d", len);
// }