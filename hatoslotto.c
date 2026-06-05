#include <stdio.h>

int main()
{
    long long cel_szorzat = 996300;
    int cel_osszeg = 90;

    for (int s1 = 1; s1 <= 40; s1++)
    {
        if (cel_szorzat % s1 != 0)
            continue;

        for (int s2 = s1 + 1; s2 <= 41; s2++)
        {
            if ((cel_szorzat / s1) % s2 != 0)
                continue;
            long long szorzat2 = (long long)s1 * s2;

            for (int s3 = s2 + 1; s3 <= 42; s3++)
            {
                if ((cel_szorzat / szorzat2) % s3 != 0)
                    continue;
                long long szorzat3 = szorzat2 * s3;

                for (int s4 = s3 + 1; s4 <= 43; s4++)
                {
                    if ((cel_szorzat / szorzat3) % s4 != 0)
                        continue;
                    long long szorzat4 = szorzat3 * s4;

                    for (int s5 = s4 + 1; s5 <= 44; s5++)
                    {
                        if ((cel_szorzat / szorzat4) % s5 != 0)
                            continue;
                        long long szorzat5 = szorzat4 * s5;

                        int jelenlegi_osszeg = s1 + s2 + s3 + s4 + s5;
                        int s6 = cel_osszeg - jelenlegi_osszeg;

                        if (s6 > s5 && s6 <= 45)
                        {
                            if (szorzat5 * s6 == cel_szorzat)
                            {
                                printf("A nyerőszámok: %d %d %d %d %d %d\n", s1, s2, s3, s4, s5, s6);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}