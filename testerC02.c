#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
int	ft_str_is_numeric(char *str);
int	ft_str_is_lowercase(char *str);
int	ft_str_is_uppercase(char *str);
int	ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);


int main()
{
	char s[] = "Hello World of 42 Wolfsburg";
    char sf[] = "salut, comment tu vas ? 42mOts quarante-deux; cinquante+et+un";
    char *se = "\n";
    char *sa = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *sas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
    char *sna = "abhs123hgh";
    char *snna = "123456789";
    char *sns = "01234567 89";
    char *ss = "abcdefghijklmnopqrstuvwxyz";
    char *sc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *snp = "\1\0\2\128";
	char *d;
	d = (char *)malloc(strlen(s) + 1);
	printf("\n\nTesting ex00 for character string\n");
	printf("By ft_strcpy :\n%s", ft_strcpy(d, s));
	printf("\nBy strcpy :\n%s", strcpy(d, s));
    printf("\n\nTesting ex00 for empty string\n");
    printf("By ft_strcpy :\n%s", ft_strcpy(d, se));
	printf("By strcpy :\n%s", strcpy(d, se));

    printf("\n\nTesting ex01 for character string\n");
    printf("By ft_strncpy:\n %s", ft_strncpy(d, s, 10));
    printf("\nBy strncpy:\n %s", strncpy(d, s, 10));
    printf("\n\nTesting ex01 for empty string\n");
    printf("By ft_strncpy:\n %s", ft_strncpy(d, se, 10));
    printf("By strncpy:\n %s", strncpy(d, se, 10));

    printf("\n\nTesting ex02 for character string\n");
    printf("By ft_str_is_alpha:\n %d", ft_str_is_alpha(sa));
    printf("\n\nTesting ex02 for character string with space\n");
    printf("By ft_str_is_alpha:\n %d", ft_str_is_alpha(sas));
    printf("\n\nTesting ex02 for empty string\n");
    printf("By ft_str_is_alpha:\n %d", ft_str_is_alpha(se));
    printf("\n\nTesting ex02 for alpha numeric string\n");
    printf("By ft_str_is_alpha:\n %d", ft_str_is_alpha(sna));
    printf("\n\nTesting ex02 for numeric string\n");
    printf("By str_is alpha:\n %d", ft_str_is_alpha(snna));

    printf("\n\nTesting ex03 for character string\n");
    printf("By ft_str_is_numeric:\n %d", ft_str_is_numeric(sa));
    printf("\n\nTesting ex03 for character string with space\n");
    printf("By ft_str_is_numeric:\n %d", ft_str_is_numeric(sas));
    printf("\n\nTesting ex03 for empty string\n");
    printf("By ft_str_is_numeric:\n %d", ft_str_is_numeric(se));
    printf("\n\nTesting ex03 for alpha numeric string\n");
    printf("By ft_str_is_numeric:\n %d", ft_str_is_numeric(sna));
    printf("\n\nTesting ex03 for numeric string\n");
    printf("By ft_str_is_numeric:\n %d", ft_str_is_numeric(snna));
    printf("\n\nTesting ex03 for numeric string with space\n");
    printf("By ft_str_is_numeric:\n %d", ft_str_is_numeric(sns));

    printf("\n\nTesting ex04 for  mix character string\n");
    printf("By ft_str_is_lowercase:\n %d", ft_str_is_lowercase(sa));
    printf("\n\nTesting ex04 for character string with space\n");
    printf("By ft_str_is_lowercase:\n %d", ft_str_is_lowercase(sas));
    printf("\n\nTesting ex04 for empty string\n");
    printf("By ft_str_is_lowercase:\n %d", ft_str_is_lowercase(se));
    printf("\n\nTesting ex04 for alpha numeric string\n");
    printf("By ft_str_is_lowercase:\n %d", ft_str_is_lowercase(sna));
    printf("\n\nTesting ex04 for numeric string\n");
    printf("By ft_str_is_lowercase:\n %d", ft_str_is_lowercase(snna));
    printf("\n\nTesting ex04 for numeric string with space\n");
    printf("By ft_str_is_lowercase:\n %d", ft_str_is_lowercase(sns));
    printf("\n\nTesting ex04 for lowercase string\n");
    printf("By ft_str_is_lowercase:\n %d", ft_str_is_lowercase(ss));
    printf("\n\nTesting ex04 for uppercase string\n");
    printf("By ft_str_is_lowercase:\n %d", ft_str_is_lowercase(sc));

    printf("\n\nTesting ex05 for  mix character string\n");
    printf("By ft_str_is_uppercase:\n %d", ft_str_is_uppercase(sa));
    printf("\n\nTesting ex05 for character string with space\n");
    printf("By ft_str_is_uppercase:\n %d", ft_str_is_uppercase(sas));
    printf("\n\nTesting ex05 for empty string\n");
    printf("By ft_str_is_uppercase:\n %d", ft_str_is_uppercase(se));
    printf("\n\nTesting ex05 for alpha numeric string\n");
    printf("By ft_str_is_uppercase:\n %d", ft_str_is_uppercase(sna));
    printf("\n\nTesting ex05 for numeric string\n");
    printf("By ft_str_is_uppercase:\n %d", ft_str_is_uppercase(snna));
    printf("\n\nTesting ex05 for numeric string with space\n");
    printf("By ft_str_is_uppercase:\n %d", ft_str_is_uppercase(sns));
    printf("\n\nTesting ex05 for lowercase string\n");
    printf("By ft_str_is_uppercase:\n %d", ft_str_is_uppercase(ss));
    printf("\n\nTesting ex05 for uppercase string\n");
    printf("By ft_str_is_uppercase:\n %d", ft_str_is_uppercase(sc));

    printf("\n\nTesting ex06 for  mix character string\n");
    printf("By ft_str_is_printable:\n %d", ft_str_is_printable(sa));
    printf("\n\nTesting ex06 for character string with space\n");
    printf("By ft_str_is_printable:\n %d", ft_str_is_printable(sas));
    printf("\n\nTesting ex06 for empty string\n");
    printf("By ft_str_is_printable:\n %d", ft_str_is_printable(se));
    printf("\n\nTesting ex06 for alpha numeric string\n");
    printf("By ft_str_is_printable:\n %d", ft_str_is_printable(sna));
    printf("\n\nTesting ex06 for numeric string\n");
    printf("By ft_str_is_printable:\n %d", ft_str_is_printable(snna));
    printf("\n\nTesting ex06 for numeric string with space\n");
    printf("By ft_str_is_printable:\n %d", ft_str_is_printable(sns));
    printf("\n\nTesting ex06 for lowercase string\n");
    printf("By ft_str_is_printable:\n %d", ft_str_is_printable(ss));
    printf("\n\nTesting ex06 for uppercase string\n");
    printf("By ft_str_is_printable:\n %d", ft_str_is_printable(sc));
    printf("\n\nTesting ex06 for non-printable string\n");
    printf("By ft_str_is_printable:\n %d", ft_str_is_printable(snp));

    printf("\n\nTesting ex07 for  mix character string\n");
    printf("By ft_strupcase:\n %s", ft_strupcase(s));
    // printf("\n\nTesting ex07 for character string with space\n");
    // printf("By ft_strupcase:\n %s", ft_strupcase(sas));
    // printf("\n\nTesting ex07 for empty string\n");
    // printf("By ft_strupcase:\n %s", ft_strupcase(se));
    // printf("\n\nTesting ex07 for alpha numeric string\n");
    // printf("By ft_strupcase:\n %s", ft_strupcase(sna));
    // printf("\n\nTesting ex07 for numeric string\n");
    // printf("By ft_strupcase:\n %s", ft_strupcase(snna));
    // printf("\n\nTesting ex07 for numeric string with space\n");
    // printf("By ft_strupcase:\n %s", ft_strupcase(sns));
    // printf("\n\nTesting ex07 for lowercase string\n");
    // printf("By ft_strupcase:\n %s", ft_strupcase(ss));
    // printf("\n\nTesting ex07 for uppercase string\n");
    // printf("By ft_strupcase:\n %s", ft_strupcase(sc));
    // printf("\n\nTesting ex07 for non-printable string\n");
    // printf("By ft_strupcase:\n %s", ft_strupcase(snp));

    printf("\n\nTesting ex08 for  mix character string\n");
    printf("By ft_strlowcase:\n %s", ft_strlowcase(s));

    printf("\n\nTesting ex09 for predefined subject string\n");
    printf("By ft_strcapitalize:\n %s", ft_strcapitalize(sf));

    printf("\n\nTesting ex10 for  mix character string\n");
    d = (char *)malloc(strlen(s) + 1);
    printf("By ft_strlcpy:\n %d",ft_strlcpy(d,sc,10));
    printf("\ndestination:\n %s", d);
    printf("\nsource:\n %s", sc);

}
///command: cc testerC02.c ex00/ft_strcpy.c ex01/ft_strncpy.c ex02/ft_str_is_alpha.c ex03/ft_str_is_numeric.c ex04/ft_str_is_lowercase.c ex05/ft_str_is_uppercase.c ex06/ft_str_is_printable.c ex07/ft_strupcase.c ex08/ft_strlowcase.c ex09/ft_strcapitalize.c ex10/ft_strlcpy.c