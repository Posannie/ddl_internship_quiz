#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b, n, m;
    scanf("%d %d %d", &b, &n, &m);

    int keyboard[n], drives[m];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &keyboard[i]);

    for (int i = 0; i < m; i++)
        scanf("%d", &drives[i]);

    int output = -1, output2 = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (keyboard[i] + drives[j] <= b)
            {
                output = keyboard[i] + drives[j];
            }

            if (output < output2)
                output = output2;

            output2 = output;
        }
    
    }

    printf("%d", output);

    return 0;
}

