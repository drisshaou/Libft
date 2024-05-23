# Libft_2024


command tests:

flag g for debug, -w suppress compiler warning messages, -I changes the include-file search, -L add dir to the list of directories searched for libraries

cc -g -w main.c -I../ -L../ -lft

check leaks:
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out.txt ./a.out

Links see also:
https://github.com/pulgamecanica/42Course/blob/main/42/ft_ls/Makefile

https://github.com/pulgamecanica/42Course/tree/main/42Core/Libft/tests