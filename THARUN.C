 #include<stdio.h>
 void main()
 {
 int no,r,rev;
 no=r=rev=0;
 printf("enter a no:");
 scanf("%d",&no);
 while(no>0)
 {
 r=no%10;
 rev=rev*10+r;
 no=no/10;
 }
 printf("reverse of the given no is:%d",rev);
 }