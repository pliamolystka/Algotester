#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    char game[n + 1];
    scanf("%s", game);
    int kpoint = 0, vpoint = 0;
    int kgame = 0, vgame = 0;
    int klast = 0, vlast = 0;
    for (int i = 0; i < n; i++)
    {
        if (game[i] == 'K')
            kpoint++;
        else if (game[i] == 'V')
            vpoint++;
        if ((kpoint >= 11 || vpoint >= 11) && abs(kpoint - vpoint) >= 2)
        {
            if (kpoint > vpoint)
            {
                kgame++;
            }

            else
            {
                vgame++;
            }
            kpoint = 0;
            vpoint = 0;
        }
    }
    klast = kpoint;
    vlast = vpoint;
    printf("%d:%d\n", kgame, vgame);
    if (klast != 0 || vlast != 0)
        printf("%d:%d\n", klast, vlast);

    return 0;
}