// #include <stdio.h>
// typedef int i;
// typedef char c;
// int main(){
//     c a='A';
//     printf("%d\n",sizeof(i));
//     printf("%d\n",sizeof(c));
//     printf("%c\n",a);
// }


// #include <stdio.h>
// struct abc{
//     int a;
//     int b;
// };
// typedef struct abc s;
// int main(){
//     s a;
//     printf("%d\n",sizeof(a));
// }

#include <stdio.h>
struct abc{
    int a;
    int b;
};
typedef struct abc s;
void fun1(s* );
int main(){
    s s1={10,20};
    printf("%d\n",sizeof(s1));
    printf("inside main: %d %d\n",s1.a,s1.b);
    fun1(&s1);
    printf("inside main: %d %d\n",s1.a,s1.b);
}
void fun1(s *s2){
    printf("inside fun1: %d %d\n",s2->a,s2->b);
    (*s2).a=1000;
    s2->b=2000;
    printf("inside fun1: %d %d\n",s2->a,s2->b);
}