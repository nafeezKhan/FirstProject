#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n, i;
    scanf("%d", &n);
    char s[n][100];
    char s1[50] = "Tetrahedron";
    char s2[50] = "Cube";
    char s3[50] = "Octahedron";
    char s4[50] = "Dodecahedron";
    char s5[50] = "Icosahedron";

    int x = 0, y = 0, z = 0, p = 0, q = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%s", s[i]);

        if (strcmp(s[i], s1) == 0)
        {
            x = x + 4;
        }
        else if (strcmp(s[i], s2) == 0)
        {
            y = y + 6;
        }
        else if (strcmp(s[i], s3) == 0)
        {
            z = z + 8;
        }
        else if (strcmp(s[i], s4) == 0)
        {
            p = p + 12;
        }
        else if (strcmp(s[i], s5) == 0)
        {
            q = q + 20;
        }
    }

    int c = x + y + z + p + q;
    printf("%d", c);

    return 0;
}