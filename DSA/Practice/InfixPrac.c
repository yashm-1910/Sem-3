#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define MAX 100
char st[MAX];
int top = -1;

void push(char st[], char val);
char pop(char st[]);
void InfixtoPostfix(char source[], char target[]);
int getPriority(char);

int main(){
    
    char infix[MAX], postfix[MAX];
    printf("Enter a infix expression: ");
    gets(infix);
    strcpy(postfix,"");
    InfixtoPostfix(infix,postfix);
    puts(postfix);
    return 0;
}

void push(char st[], char val){
    if (top == MAX-1)
    {
        printf("\nStack Overflow.");
    }
    else
    {
        top++;
        st[top] = val;
    }
}
char pop(char st[]){
    char ch = ' ';
    if (top == -1)
    {
        printf("\nStack Underflow");
    }
    else{
        ch = st[top];
        top--;
    }
    return ch;
}

int getPriority(char op)
{
    if(op=='/' || op == '*' || op=='%')
        return 1;
    else
        return 0;
}

void InfixtoPostfix(char source[], char target[]){
    int i = 0,j=0;
    strcpy(target,"");
    while(source[i]!='\0'){
        if (source[i] == '(')
        {
            push(st,source[i]);
            i++;
        }
        else if (source[i] == ')')
        {
            while ((top!=-1) && (st[top]!='('))
            {
                target[j]=pop(st);
                j++;
            }
            if (top == -1)
            {
                printf("\nInvalid Expression!");
                exit(1);
            }
            char temp = pop(st);
            i++;
        }
        else if((isalpha(source[i])) || (isdigit(source[i]))){
            target[j]=source[i];
            i++;
            j++;
        }
        else if(source[i]=='+' || source[i]=='-' || source[i]=='*' || source[i]=='%' || source[i]=='/'){
            while ((top!=-1)&&(st[top]!='(')&&(getPriority(st[top])>=getPriority(source[i])))
            {
                target[j]=pop(st);
                j++;
            }
            push(st, source[i]);
            i++;
        }
        else
        {
            printf("\nInvalid Expression.");
            exit(1);
        }
    }
    while ((top!=-1))
    {
        target[j]=pop(st);
        j++;
    }
    target[j]='\0';

}



