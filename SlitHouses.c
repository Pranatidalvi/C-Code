
#include <stdio.h>
// Write your code here
int main()
{
    int n=0,i;
    int flag=0;
   
    scanf("%d",&n);
    char carr[n];
    for(i=0;i<=n;i++)
    {
        scanf("%c",&carr[i]);
    }
 
  for(i=0;i<=n;i++)
  {
    if(carr[i]=='H'&& carr[i+1]=='H')
    {
        flag=1;
    }
    else if(carr[i]=='.')
    {
        carr[i]='B';
    }
  }
  if(flag==1)
    printf("NO");
    else
    printf("YES");

  if(flag==0)
  {  
    for(i=0;i<=n;i++)
    {
        printf("%c",carr[i]);
    }
  }
    return 0;
}
