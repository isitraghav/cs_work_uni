int factorial(int num)
{
    int result = 1;
    if (num == 0 || num == 1)
        return 1;
    else
    {
        for (int i = num; i > 1; i--)
            result *= i;
        return result;
    }
}
