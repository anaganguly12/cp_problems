#include <stdio.h>
#include <ctype.h>
#define MAX 10
int top = -1;
char stck[MAX];
void push(char x)
{
    if (top == (MAX - 1))
    {
        printf("Stack overflow\n");
    }
    else
    {
        top++;
        stck[top] = x;
    }
}
char pop()
{
    char y = "\0";
    if (top == -1)
    {
        printf("Stack Underflow");
    }
    else
    {
        y = stck[top];
        top--;
    }
    return y;
}
int preced(char x)
{
    int v;
    if (x == '^')
    {
        v = 100;
    }
    else if (x == '*' || x == '/')
    {
        v = 99;
    }
    else if (x == '+' || x == '-')
    {
        v = 98;
    }
    else
    {
        v = 97;
    }
    return v;
}
int main()
{
    int i = 0, j = 0, x;
    char q[100], p[100];
    printf("\n Enter your infix expression, appended ) at end: ");
    gets(q);
    push('(');
    while (q[i] != '\0')
    {
        if (isalpha(q[i]))
        {
            p[j] = q[i];
            j++;
        }
        else
        {
            if (q[i] == '(')
            {
                push(q[i]);
            }
            else if (q[i] == ')')
            {
                x = pop();
                while (x != '(')
                {
                    p[j] = x;
                    j++;
                    x = pop();
                }
            }
            else
            {
                while (preced(stck[top]) >= preced(q[i]))
                {
                    p[j] = pop();
                    j++;
                }
                push(q[i]);
            }
        }
        i++;
    }
    return 0;
}