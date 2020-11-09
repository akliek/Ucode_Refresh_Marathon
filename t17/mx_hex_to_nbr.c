static double mx_pow(double n, unsigned int pow) {
    double num = n;

    if(pow == 0)
        return (1);
    for(unsigned int i = 1; i < pow; i++)
        num = n * num;
    return num;
}
static int mx_strlen(const char *s) {
    int i = 0;

    if(s) {
        while(s[i])
            i++;
        return i;
    }
    return (0);
}

unsigned long mx_hex_to_nbr(const char *hex) {
    int val = 0;
    unsigned long dec = 0;
    int i;
    int len;
    len = mx_strlen(hex);
    len--;

    for(i = 0; hex[i] != '\0'; i++) {
        if(hex[i] >= '0'&& hex[i] <= '9')
            val = hex[i] - 48;
        else if(hex[i] >= 'a' && hex[i] <= 'f')
            val = hex[i] - 97 + 10;
        else if(hex[i] >= 'A' && hex[i] <= 'F')
            val = hex[i] - 65 + 10;
        dec += val * mx_pow(16, len);
        len--;
    }
    return dec;
}
