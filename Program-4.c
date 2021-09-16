void main()
{
  int a[11],i;
  static int b[10];
  printf("Enter the numbers");
  for(i=0;i<11;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<11;i++)
  {
    if(a[i]%1==0)
      b[0]++;
    if(a[i]%2==0)
      b[1]++;
    if(a[i]%3==0)
      b[2]++;
    if(a[i]%4==0)
      b[3]++;
    if(a[i]%5==0)
      b[4]++;
    if(a[i]%6==0)
      b[5]++;
    if(a[i]%7==0)
      b[6]++;
    if(a[i]%8==0)
      b[7]++;
    if(a[i]%9==0)
      b[8]++;
  }
  printf("1:%d,2:%d,3:%d,4:%d,5:%d,6:%d,7:%d,8:%d,9:%d", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7], b[8]);
  getch();
}
