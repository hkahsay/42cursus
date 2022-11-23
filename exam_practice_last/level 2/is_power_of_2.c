#include<stdio.h>

int	is_power_of_2(unsigned int n)
{
	while (n > 0)
	{
		if (n % 2 == 0)
		{
			return(1);
			n = n / 2;	
		}
		return(0);
	}
	return(1);
}

// int isPowerOfTwo(int n)
// {
//     if (n == 0)
//         return 0;
//     while (n != 1) {
//         if (n % 2 != 0)
//             return 0;
//         n = n / 2;
//     }
//     return 1;
// }
 
// Driver code
int main()
{
    // Function call
    is_power_of_2(31) ? printf("Yes\n") : printf("No\n");
    is_power_of_2(64) ? printf("Yes\n") : printf("No\n");
	is_power_of_2(8) ? printf("Yes\n") : printf("No\n");
	is_power_of_2(14) ? printf("Yes\n") : printf("No\n");
	is_power_of_2(65) ? printf("Yes\n") : printf("No\n");
	is_power_of_2(6) ? printf("Yes\n") : printf("No\n");
}