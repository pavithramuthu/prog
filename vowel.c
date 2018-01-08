#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("Enter the character:");
scanf("%c",&c);
if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
{
printf("This is a vowel");
}
else
{
printf("This is not a consonant");
}
getch();
}
