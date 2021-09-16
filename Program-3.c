void main()
{
  int a,i,k=1;
  printf("Enter the number\n");
  scanf("%d",&a);
  if(a%2==0)
    a=a-1;
  for(i=0;i<a;i++)
  {
    printf("%d",k);
    k=k+2;
  }
  getch();
}
