// Functions
#include <stdio.h>

int addNumbers(int a,int b){
    int result;
    result = a+b;
    printf("Execution of addNumbers is completed\n");
    return result;
}


int main()
{
    int n1,n2,sum;
    n1 = 5;
    n2 = 7;
    printf("Call the function below...\n");
    sum = addNumbers(n1,n2);
    printf("The sum of the numbers is %d\n",sum);

    return 0;
}



#include <stdio.h>

int
makeHalwa (int milk, int ghee, int suji)
{

  int isHalwaReady;
  if (milk != 0 && ghee != 0 && suji != 0)
	{
	  printf ("Here's is your halwa ready\n");
	  isHalwaReady = 1;
	}
  else
	{
	  printf ("Go away and don't play prank with me !!\n");
	  isHalwaReady = 0;
	}

  return isHalwaReady;
}

int
main ()
{

  int myMilk, myGhee, mySuji;
  int myHalwaReady;

  printf ("Enter the quantity of Milk\n");
  scanf ("%d", &myMilk);
  printf ("Enter the quantity of myGhee\n");
  scanf ("%d", &myGhee);
  printf ("Enter the quantity of mySuji\n");
  scanf ("%d", &mySuji);

  myHalwaReady = makeHalwa (myMilk, myGhee, mySuji);

  if (myHalwaReady)
	{
	  printf ("Okay I am bringing my vessel !!\n");
	}
  else
	{
	  printf ("Smile to the camera, you have been pranked !! \n");
	}

  return 0;
}