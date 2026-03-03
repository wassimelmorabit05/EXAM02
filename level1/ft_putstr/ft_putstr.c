void	ft_putstr(char *str)
{
    while(*str)
    {
        write(1, str, 1);
        str++;
    }
}
// int main()
// {
//     char *string = "hello my name is anass";
//     ft_putstr(string);
// }