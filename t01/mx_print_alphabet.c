void mx_printchar(char c);

void mx_print_alphabet(void) {
    int letter;
    for(letter = 65; letter <= 90; letter+=2) {
        mx_printchar(letter);
        mx_printchar(letter + 33);
    }
    mx_printchar('\n');
}
