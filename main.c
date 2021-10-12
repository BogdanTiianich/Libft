// #include "libft.h"
#include "libft_bonus.h"
int	main(void)
{
	char	set = 'c';
	int	d;
	char   **s;
	int dest[2];
	t_list	*list;
	t_list	*list1;
	t_list	*list2;
	char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";
	// int k[4]= {0,1,2,3};
	// int a[4]= {9,8,7,6};
	//printf("%s\n", a);
	//ft_strlcat(k, a, 10);
	//ft_strncmp(k, a,8);
	// dest[10] = 'a';
	// //ft_strlcat(dest, "lorem ipsum dolor sit amet", 0);
	// //s = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	// d = ;
	// // printf("%s\n", dest);
	list = ft_lstnew((void *)s1);
	list1 = ft_lstnew("(void *)s1");
	list2 = ft_lstnew("int");
	ft_lstadd_front(&list, list1);
	ft_lstadd_back(&list, list2);
	printf("%d\n", d);
	printf("%s\n", ft_strjoin("s1","s2"));

	// while (s[d] != NULL)
	// {
	// 	printf("%s\n", s[d]);	
	// 	d++;
	// }
	// printf("%s\nprivet", s);

}
