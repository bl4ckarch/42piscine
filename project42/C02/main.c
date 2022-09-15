#include <unistd.h>
#include <stdio.h>




/*main ex00 ex01*/
int main()
{
    char source[9]= "hello42";
    char destination[15]= "born to code";

    printf("source avant%s\n", source);
    printf("dest avant %s\n", destination);
    
    printf("-----------------------------------\n");
    printf("-----------------------------------\n");
    printf("-----------------------------------\n");
    ft_strcpy(destination,source);

    printf("source apres %s\n", source);
    printf("dest apres %s\n", destination);

return 0;

}

/***main c02 ex02**/
int main()
{
    char test00[]= "hello42";
    char test01[] = "hello";
    char testn[] = "";
    
    int n = ft_str_is_alpha(testn);
    int s = ft_str_is_alpha(test00);
    int t = ft_str_is_alpha(test01);
    
    printf("%d\n",n);// 1
    printf("%d\n",s); //0
    printf("%d\n",t);//1

    return(0);

}

/*main ex03*/
int main()
{
    char test00[]= "42";
    char test01[] = "45sdfdsfdsf";
    char testn[] = "";
    
    int s = ft_str_is_numeric(test00);
    int t = ft_str_is_numeric(test01);
    int n = ft_str_is_numeric(testn);
    
    printf("%d\n",s);// 1
    printf("%d\n",t); //0
    printf("%d\n",n);//1

    return(0);

}