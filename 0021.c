int main()
{
 int x,y,z,tr;
 printf("enter the length of the street in m:\n");
 scanf("%d",&x);

 printf("enter the distance between the trees:\n");
 scanf("%d",&y);

 printf("enter a cost for the tree:\n");
 scanf("%d",&z);

tr=x/y+1;
 printf("the no. of trees:%d\n",tr);
 printf("the cost:%d\n",z*tr);
 return 0;}

