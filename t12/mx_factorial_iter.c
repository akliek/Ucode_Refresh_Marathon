int mx_factorial_iter(int n) {
    int fact = n;

    if((n < 0) || (n >= 13))
        return 0;
    if(n == 0)
        return 1;
    for(int i = 1; i < n; i++)
        fact *= i;
    return fact;
}
