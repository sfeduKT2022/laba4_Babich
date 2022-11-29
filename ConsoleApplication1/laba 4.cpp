#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE* fin, * fout;
    fin = fopen("C:/input.txt", "r");
    fout = fopen("C:/output.txt", "w");
    if (fin == NULL || fout == NULL) {
        printf("Eror open the file!");
        return 0;
    }
    char s[10000];
    while (!feof(fin)) {
        fscanf(fin, "%s", &s);
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == 'B')
            {
                s[i] = 'C';

            }
            else
            {
                if (s[i] == 'b')
                {
                    s[i] = 'c';

                }
            }

        }


        fprintf(fout, "%s", &s);
        fprintf(fout, "%s", "\n");
    }
    fclose(fin);
    fclose(fout);

}



