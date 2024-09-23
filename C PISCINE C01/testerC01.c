#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int		number;
		int n;       // Declare an integer variable
	int	*n1;     // Pointer to int
	int	**n2;    // Pointer to pointer to int
	int	***n3;   // Pointer to pointer to pointer to int
	int	****n4;  // Pointer to pointer to pointer to pointer to int
	int	*****n5; // ... and so on
	int	******n6;
	int	*******n7;
	int	********n8;
	int	*********n9;
	int	x;
	int	y;
	int	a;
	int	b;
	int	div;
	int	mod;
	int	size;
	char	*test_str;
	char	*test1;
	char	*test2;
	char	*test3;
	char	*test4;
	int	arr[] = {5, 2, 9, 1, 5, 6};
	int	aarr[] = {1, 2, 3, 4, 5, 6};
	x = 10;
	y = 20;
	number = 0;
	n = 0;    // Initialize the integer variable
	n1 = &n;  // n1 points to n
	n2 = &n1; // n2 points to n1
	n3 = &n2; // n3 points to n2
	n4 = &n3; // n4 points to n3
	n5 = &n4; // n5 points to n4
	n6 = &n5; // n6 points to n5
	n7 = &n6; // n7 points to n6
	n8 = &n7; // n8 points to n7
	n9 = &n8; // n9 points to n8 (9th level pointer)
	
	printf("Checking ex01\n\n");
	printf("Before ft_ft: %d\n", number);
	ft_ft(&number);
	printf("After ft_ft: %d\n", number);

	printf("\n\nChecking ex02\n\n");
	printf("The value of 9th pointer before calling function is: %d\n", n);
	ft_ultimate_ft(n9);
	printf("The value of 9th pointer is: %d\n", n);
	printf("\n\nChecking ex03\n\n");
	printf("Before swap: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("After swap: x = %d, y = %d\n", x, y);
	printf("\n\nChecking ex04\n\n");
	a = 10;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("Division: %d / %d = %d\n", a, b, div);
	printf("Modulus: %d %% %d = %d\n", a, b, mod);
	x = 42;
	y = 5;
	printf("\n\nChecking ex05\n\n");
	printf("Before: x = %d, y = %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("After: x (div) = %d, y (mod) = %d\n", x, y);
	printf("\n\nChecking ex06\n\n");
	test_str = "Hello, world!";
	ft_putstr(test_str);
	printf("\n\nChecking ex07\n\n");
	test1 = "Hello, World!";
	test2 = "";
	test3 = "42";
	test4 = "This is a longer string with multiple words.";
	printf("Length of '%s' is: %d\n", test1, ft_strlen(test1));
	printf("Length of '%s' is: %d\n", test2, ft_strlen(test2));
	printf("Length of '%s' is: %d\n", test3, ft_strlen(test3));
	printf("Length of '%s' is: %d\n", test4, ft_strlen(test4));
	printf("\n\nChecking ex08\n\n");
	size = sizeof(arr) / sizeof(arr[0]);
	printf("Array before sorting:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	ft_sort_int_tab(arr, size);
	printf("Array after sorting:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	size = sizeof(aarr) / sizeof(aarr[0]);
	printf("Original array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", aarr[i]);
	}
	printf("\n");
	ft_rev_int_tab(aarr, size);
	printf("Reversed array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", aarr[i]);
	}
	printf("\n");
}
// command cc testerC01.c ex00/ft_ft.c ex01/ft_ultimate_ft.c ex02/ft_swap.c ex03/ft_div_mod.c ex04/ft_ultimate_div_mod.c ex05/ft_putstr.c ex06/ft_strlen.c ex07/ft_rev_int_tab.c ex08/ft_sort_int_tab.c