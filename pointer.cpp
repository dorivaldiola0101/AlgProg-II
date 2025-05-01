#include <stdio.h>

// int main(void)
// {
//     char c, *p;
//     p = &c;
//     c = 'a';
//     printf("&c = %p c = %c\n", (void*)&c, c);
//     printf("&p = %p p = %p *p = %c\n\n", (void*)&p, (void*)p, *p);

//     c = '/';
//     printf("&c = %p c = %c\n", (void*)&c, c);
//     printf("&p = %p p = %p *p = %c\n\n", (void*)&p, (void*)p, *p);

//     *p = 'Z';
//     printf("&c = %p c = %c\n", (void*)&c, c);
//     printf("&p = %p p = %p *p = %c\n\n", (void*)&p, (void*)p, *p);

//     return 0;
// }

// int main(void)
// {
//     int i, j, *p1, *p2;
//     p1 = &i;         // p1 aponta para i
//     i = 5;           // i recebe 5
//     j = 2 * *p1 + 3; // j = 2 * 5 + 3 = 13
//     p2 = p1;         // p2 também aponta para i

//     printf("i = %d, &i = %p\n\n", i, (void*)&i);
//     printf("j = %d, &j = %p\n\n", j, (void*)&j);
//     printf("&p1 = %p, p1 = %p, *p1 = %d\n", (void*)&p1, (void*)p1, *p1);
//     printf("&p2 = %p, p2 = %p, *p2 = %d\n\n", (void*)&p2, (void*)p2, *p2);

//     return 0;
// }


int main(void)
{
    int a, b, c, *ptr;
    a = 3;
    b = 7;
    printf("a=%d, b=%d\n", a, b);

    ptr = &a;
    c = *ptr;
    ptr = &b;
    a = *ptr;
    ptr = &c;
    b = *ptr;
    printf("a=%d, b=%d\n", a,b);
    return 0;
}