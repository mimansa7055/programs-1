//  WAP to generate all combinations of 1, 2 and 3
#include <stdio.h>
int combi(int i, int j, int k);
int main()
{
    int i, j, k;
    combi(i, j, k);
    return 0;
}
int combi(int i, int j, int k)
{
    for (i = 1; i < 4; i++)
    {
        for (j = 1; j < 4; j++)
        {
            for (k = 1; k < 4; k++)
            {
                printf("%d%d%d\n", i, j, k);
            }
        }
    }
}


//OUTPUT
/* 
111
112
113
121
122
123
131
132
133
211
212
213
221
222
223
231
232
233
311
312
313
321
322
323
331
332
333*/