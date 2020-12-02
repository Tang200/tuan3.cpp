#include<iostream>

#include<string.h>

#define Max 1000

using namespace std;

int IndexOf(char *s, char c) {

char *l=s;

int dem=0;

if(*l=='c') { return 1; }

else { while (*l!='c'&&*l!='\0')

{ l++; dem++; }

if (*l=='\0') {

return -1; }

else { return dem+1;

}
