#include <stdlib.h>
#include <unistd.h>
#include "minilibx-linux/mlx.h"
#include <stdio.h>
#include "codebar.h"

int		ft_strncmp(const char *s1, const char *s2, unsigned int v_n)
{
	unsigned int	v_i;

	v_i = 0;
	if (v_n == 0)
		return (0);
	while (*((unsigned char *)s1 + v_i)
		&& *((unsigned char *)s1 + v_i)
		== *((unsigned char *)s2 + v_i)
		&& v_i < v_n - 1)
		v_i++;
	return ((int)(*((unsigned char *)s1 + v_i) - *((unsigned char *)s2 + v_i)));
}

char check_str(char *str)
{
	if (ft_strncmp(str, A, 11) == 0)
		return 'A';
	else if (ft_strncmp(str, B, 11) == 0)
		return 'B';
	else if (ft_strncmp(str, C, 11) == 0)
		return 'C';
	else if (ft_strncmp(str, D, 11) == 0)
		return 'D';
	else if (ft_strncmp(str, E, 11) == 0)
		return 'E';
	else if (ft_strncmp(str, F, 11) == 0)
		return 'F';
	else if (ft_strncmp(str, G, 11) == 0)
		return 'G';
	else if (ft_strncmp(str, H, 11) == 0)
		return 'H';
	else if (ft_strncmp(str, I, 11) == 0)
		return 'I';
	else if (ft_strncmp(str, J, 11) == 0)
		return 'J';
	else if (ft_strncmp(str, K, 11) == 0)
		return 'K';
	else if (ft_strncmp(str, L, 11) == 0)
		return 'L';
	else if (ft_strncmp(str, M, 11) == 0)
		return 'M';
	else if (ft_strncmp(str, N, 11) == 0)
		return 'N';
	else if (ft_strncmp(str, O, 11) == 0)
		return 'O';
	else if (ft_strncmp(str, P, 11) == 0)
		return 'P';
	else if (ft_strncmp(str, Q, 11) == 0)
		return 'Q';
	else if (ft_strncmp(str, R, 11) == 0)
		return 'R';
	else if (ft_strncmp(str, S, 11) == 0)
		return 'S';
	else if (ft_strncmp(str, T, 11) == 0)
		return 'T';
	else if (ft_strncmp(str, U, 11) == 0)
		return 'U';
	else if (ft_strncmp(str, V, 11) == 0)
		return 'V';
	else if (ft_strncmp(str, W, 11) == 0)
		return 'W';
	else if (ft_strncmp(str, X, 11) == 0)
		return 'X';
	else if (ft_strncmp(str, Y, 11) == 0)
		return 'Y';
	else if (ft_strncmp(str, Z, 11) == 0)
		return 'Z';
	else if (ft_strncmp(str, a, 11) == 0)
		return 'a';
	else if (ft_strncmp(str, b, 11) == 0)
		return 'b';
	else if (ft_strncmp(str, c, 11) == 0)
		return 'c';
	else if (ft_strncmp(str, d, 11) == 0)
		return 'd';
	else if (ft_strncmp(str, e, 11) == 0)
		return 'e';
	else if (ft_strncmp(str, f, 11) == 0)
		return 'f';
	else if (ft_strncmp(str, g, 11) == 0)
		return 'g';
	else if (ft_strncmp(str, h, 11) == 0)
		return 'h';
	else if (ft_strncmp(str, i, 11) == 0)
		return 'i';
	else if (ft_strncmp(str, j, 11) == 0)
		return 'j';
	else if (ft_strncmp(str, k, 11) == 0)
		return 'k';
	else if (ft_strncmp(str, l, 11) == 0)
		return 'l';
	else if (ft_strncmp(str, m, 11) == 0)
		return 'm';
	else if (ft_strncmp(str, n, 11) == 0)
		return 'n';
	else if (ft_strncmp(str, o, 11) == 0)
		return 'o';
	else if (ft_strncmp(str, p, 11) == 0)
		return 'p';
	else if (ft_strncmp(str, q, 11) == 0)
		return 'q';
	else if (ft_strncmp(str, r, 11) == 0)
		return 'r';
	else if (ft_strncmp(str, s, 11) == 0)
		return 's';
	else if (ft_strncmp(str, t, 11) == 0)
		return 't';
	else if (ft_strncmp(str, u, 11) == 0)
		return 'u';
	else if (ft_strncmp(str, v, 11) == 0)
		return 'v';
	else if (ft_strncmp(str, w, 11) == 0)
		return 'w';
	else if (ft_strncmp(str, x, 11) == 0)
		return 'x';
	else if (ft_strncmp(str, y, 11) == 0)
		return 'y';
	else if (ft_strncmp(str, z, 11) == 0)
		return 'z';
	else if (ft_strncmp(str, NUMBER_0, 11) == 0)
		return '0';
	else if (ft_strncmp(str, NUMBER_1, 11) == 0)
		return '1';
	else if (ft_strncmp(str, NUMBER_2, 11) == 0)
		return '2';
	else if (ft_strncmp(str, NUMBER_3, 11) == 0)
		return '3';
	else if (ft_strncmp(str, NUMBER_4, 11) == 0)
		return '4';
	else if (ft_strncmp(str, NUMBER_5, 11) == 0)
		return '5';
	else if (ft_strncmp(str, NUMBER_6, 11) == 0)
		return '6';
	else if (ft_strncmp(str, NUMBER_7, 11) == 0)
		return '7';
	else if (ft_strncmp(str, NUMBER_8, 11) == 0)
		return '8';
	else if (ft_strncmp(str, NUMBER_9, 11) == 0)
		return '9';
}

int main(int argc, char **argv)
{
	void	*mlx_ptr = mlx_init();
	void	*img_ptr;
	char	*img_addr;
	int		bits_per_pixel = 32;
	int 	v_w, v_h;
	int		width;
	int		endian = 0;
	char	*str = malloc(12);
	str[11] = '\0';

	img_ptr = mlx_xpm_file_to_image(mlx_ptr, argv[1], &v_w, &v_h);
	img_addr = mlx_get_data_addr(img_ptr, &bits_per_pixel, &width, &endian);
	int v_j = 0;
	while (v_j < v_w)
	{
		for (int v_k=0; v_k < 11; v_k++)
		{
			if ((unsigned char) img_addr[v_j * 4] == 255)
				str[v_k] = '0';
			else
				str[v_k] = '1';
			v_j++;
		}
		printf("%c", check_str(str));
	}
}
