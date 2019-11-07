#include "libmx.h"
#include <stdio.h>

int main()
{
  
 /* char *arr[] = {"Try", "agein", "please", NULL};
    char delim = ' ';
    mx_print_strarr(arr, &delim);
 
    char str[] = "Michael";
    mx_printint(mx_get_char_index(str, 'c'));
    mx_printint(mx_get_char_index(NULL, 'c'));
    mx_printint(mx_get_char_index(str, 'r'));
  
    char s1[17] = "Michael ";
    char s2[] = "Boiko";
    mx_printstr(mx_strcat(s1, s2));
 
    char dst[10];
    char src[8] = "Michael";
    mx_strncpy(dst, src, 3);
    mx_printstr(mx_strncpy(dst, src, 9));
  
    char **arr = {"asd", "asdf", "asdfg", "asdfgh", NULL};
    mx_del_strarr(&arr);
  
    char str[] = "Michael";
    mx_printstr(mx_strndup(str, 4));
  
    char str1[] = "Follow the white rebbit";
    char str2[] = "iter";
    if (mx_strstr(str1, str2) == NULL)
    {
	mx_printint(1);
    }
    else
    {
	mx_printstr(mx_strstr(str1, str2));
    }
    
    mx_printint(mx_get_substr_index("McDonalds", "Don")); //returns 2
    mx_printint(mx_get_substr_index("McDonalds Donuts", "on")); //returns 3
    mx_printint(mx_get_substr_index("McDonalds", "Donatello")); //returns -1
    mx_printint(mx_get_substr_index("McDonalds", NULL)); //returns -2
    mx_printint(mx_get_substr_index(NULL, "Don")); //returns -2
  
    char str[] = "yo, yo, yo Nyo";
    char sub[] = "t";
    mx_printint(mx_count_substr(str, sub));
    mx_printint(mx_count_substr(NULL, sub));
    mx_printint(mx_count_substr(str, NULL));
   
    char name[] = "     a a a";
   // char name[] = "  ";
    char *s1 = mx_strtrim(name);
    if(s1 == NULL)
    {
	mx_printint(1);
    }
    else
    {
	mx_printstr(s1);
    }
  
    char name[] = "\f  My\n name...     is  \r Neo  \t\n ";
   // char name[] = "  ";
    char *s1 = mx_del_extra_spaces(name);
    if(s1 == NULL)
    {
        mx_printint(1);
    }
    else
    {
        mx_printstr(s1);
    }
  
    char s1[] = "**Good bye,**Mr.*Anderson.****";
    char s2[] = "     Knock, knock,    Neo.   ";
    char **arr1 = mx_strsplit(s1, '*');
    char **arr2 = mx_strsplit(s2, ' ');
    for(int i = 0; arr1[i] != NULL; i++)
    {
	mx_printstr(arr1[i]);
    }
    mx_printchar('\n');
    for(int i = 0; arr2[i] != NULL; i++)
    {
        mx_printstr(arr2[i]);
    }
  
    char str1[] = "this";
    char str2[] = "dodge ";
    char *str3 = NULL;
    mx_printstr(mx_strjoin(str2, str1));
    mx_printchar('\n');
    mx_printstr(mx_strjoin(str1, str3));
    mx_printchar('\n');
    printf("%s\n", mx_strjoin(str3, str3));
  */
   //printf("%s\n",mx_memrchr(, 4, 2)); //returns "McDonuts"
    //printf("%s\n", mx_replace_substr("Ururu turu", "ru", "ta")); //returns "Utata tuta"
  //char *arr[] =  {"Michelangelo", "Donatello", "Leonardo", "Raphael", NULL};
  //char str[4] = NULL;
  // mx_str_reverse(str);
  // printf("%s",str);
    //for (int i = 0; i < 4; i++)
      //        printf("%s\n", arr[i]);
  //char ** ar = mx_strsplit("sadfhjhgj", ' ');
  //printf("%s", mx_replace_substr("McDonaldsa", "alds", "uts"));
  
  mx_printstr("Misha hui sosi\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
