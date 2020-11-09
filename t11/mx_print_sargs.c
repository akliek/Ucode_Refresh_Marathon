void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);
void mx_printchar(char c);

int main(int argc, char *argv[]) {
    for(int i = 0; i < argc; i++) {
        for(int j = i + 1; j < argc; j++) {
            if(mx_strcmp(argv[j - 1], argv[j]) > 0) {
                char *swap = argv[j];
                argv[j] = argv[j];
                argv[j] = swap;
            }
        }
    }
    for(int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}
