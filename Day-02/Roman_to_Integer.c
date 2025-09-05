
int romanToInt(char *s)
{

    int length = strlen(s);
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        int index = i > 0 ? i-1 : 0;

        if (
            s[index] == 'I' && s[i] == 'V' ||
            s[index] == 'I' && s[i] == 'X' ||
            s[index] == 'X' && s[i] == 'L' ||
            s[index] == 'X' && s[i] == 'C' ||
            s[index] == 'C' && s[i] == 'D' ||
            s[index] == 'C' && s[i] == 'M')
        {
            continue;
        };

        // IV
        if (s[i] == 'I' && s[i + 1] == 'V')
        {
            sum += 4;
            continue;
        };

        // IX
        if (s[i] == 'I' && s[i + 1] == 'X')
        {
            sum += 9;
            continue;
        };

        // XL
        if (s[i] == 'X' && s[i + 1] == 'L')
        {
            sum += 40;
            continue;
        };

        // XC
        if (s[i] == 'X' && s[i + 1] == 'C')
        {
            sum += 90;
            continue;
        };

        // CD
        if (s[i] == 'C' && s[i + 1] == 'D')
        {
            sum += 400;
            continue;
        };

        // CM
        if (s[i] == 'C' && s[i + 1] == 'M')
        {
            sum += 900;
            continue;
        }

        if (s[i] == 'I')
            sum += 1;
        if (s[i] == 'V')
            sum += 5;
        if (s[i] == 'X')
            sum += 10;
        if (s[i] == 'L')
            sum += 50;
        if (s[i] == 'C')
            sum += 100;
        if (s[i] == 'D')
            sum += 500;
        if (s[i] == 'M')
            sum += 1000;
    }

    return sum;
}