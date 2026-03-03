char    *ft_strcpy(char *s1, char *s2)
{
    char *save = s1;
    while(*s2)
        *s1++ = *s2++;
    return (save);
}
int main()
{
    char *string = "hello world";
    char dst[100];
    ft_strcpy(dst, string);
    printf("%s", dst);
}