#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 3)
    {
        const char *s1 = argv[1];
        const char *s2 = argv[2];
        int seen[256] = {0};

        while (s1[i])
        {
            if(seen[s1[i]] == 0)
            {
                seen[s1[i]] = 1;
                write(1, &s1[i], 1);
            }
            i++;
        }
        i = 0;
        while (s2[i])
        {
            if(seen[s2[i]] == 0)
            {
                seen[s2[i]] = 1;
                write(1, &s2[i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}