//inter

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	used[255];
	int	i;
	int	j;

	if(argc == 3)
	{
		i = 0;
		while(i < 255)
			used[i++] = 0;
		i = 2;
		while (i>0)
		{
			j = 0;
			while (argv[i][j])
			{
				if (i == 2 && !used[(unsigned char)argv[i][j]])
					used[(unsigned char)argv[i][j]] = 1;
				else if (i == 1 && used[(unsigned char)argv[i][j]] == 1)
				{
					write(1, &argv[i][j], 1);
					used[(unsigned char)argv[i][j]] = 2;
				}
				j++;
			}
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}

//union

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	used[255];
	int	i;
	int	j;

	if (argc == 3)
	{
		i = 0;
		while (i < 255)
			used[i++] = 0;
		i = 1;
		while (i<3)
		{
			j = 0;
			while(argv[i][j])
			{
				if (!used[(unsigned char)argv[i][j]])
				{
					used[(unsigned char)argv[i][j]] = 1;
					write(1, &argv[i][j], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}

int	get_next_line(char **line)
{
	int	rd = 0;
	int i = 0;
	char	ch;
	char	*buffer = malloc(100000);

	*line = buffer;
	while ((rd = read(0, &ch, 1))> 0 && ch != '\n')
		buffer[i++] = ch;
	buffer[i] = '\0';
	retunr (rd);
}