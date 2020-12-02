Bai1:
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
Bai2:
#include<iostream> 
#define Max 1000 
using namespace std;
 char *SubString(char *s, int index, int length) { 
do { 
cin>>index>>length; 
if (index<1||length<1) {
 cout<<"Khong hop le. Nhap lai: "; }
} 
while (index<1||length<1); 
s[index+length-1]='\0';
 char *l=&s[index-1]; 
cout<<"Xau con duoc lay ra tu vi tri "<<index<<" "<<"voi do dai "<<length<<" "<<"la :";
 return l; }
 int main() {
 char s[Max];
 int index; 
int length;
 cout<<"Nhap vao xau ki tu: "; 
cin.getline(s,Max,'\n'); 
cout<<"Nhap vao vi tri index va do dai cua xau ki tu can lay: "; cout<<SubString(s,index,length); }
