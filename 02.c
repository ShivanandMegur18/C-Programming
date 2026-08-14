/*#include<stdio.h>

void main()
{
    int a=18, b=18;

    printf("%d\n",a!=b);
    printf("%d", 'a'<'b');
  
}*/

#include<stdio.h>
// void main()
// {

//     int a=18,b=9, c,d,e=10,f,g;
//     c=b++;
//     d=b;
//     f=2.2;
//     g=2.22;
//     printf("%d\n",a<b<c>d);
//     printf("%d\n",b==e);
//     printf("%d\n",c+1>e);
//     printf("%d\n",a+c==b>e<c+d!=1);
//     printf("%d\n",f=g);
// }



int main() {
	
    int n,i,sum=0,a;
    scanf("%d", &n);
    while(n!=0){
        a=n%10;
        sum+=a;
        n=n/10;
    }
    printf("%d",sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}