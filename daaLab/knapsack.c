#include<stdio.h>
struct obj
{
	int obj_no;
	float weight;
	float value;
	float ratio;
};
int main()
{
	int n;
	printf("Enter the no of obljects:");
	scanf("%d",&n );


	struct obj objects[n],temp;

	for(int i = 0;i < n; ++i)
	{
		printf("Enter the values for object %d:\n", i+1);
		
		objects[i].obj_no = i+1;

		printf("Weight: ");
		scanf("%f", &objects[i].weight);
		
		printf("Value: ");
		scanf("%f", &objects[i].value);
		
		objects[i].ratio = objects[i].value / objects[i].weight;
	}
	
	for(int i=0; i<n; i++)
	{	for(int j = i +1; j < n; ++j)
            		if(objects[i].ratio > objects[j].ratio)
            		{
                		temp     = objects[i];
                		objects[i] = objects[j];
                		objects[j] = temp;
            		}
	}

	float weight, value=0.0;
	printf("Enter max. weight of the knapsack: ");
	scanf("%f", &weight);

	printf("Object no,\t\tWeight of object\t\tValue of Object\t\tValue of knapsack\n");
	for(int i = 0;i< n, weight!= 0.0; ++i)
	{
		if(weight > objects[i].weight)
		{
			weight-= objects[i].weight;
			value+= objects[i].value;
	
			printf("%d\t\t%f\t\t%f\t\t%f\n",objects[i].obj_no,objects[i].weight,objects[i].value,value);
		}
		else
		{
			value = value + objects[i].ratio*weight;
			weight = 0;
			printf("%d\t\t\t%f\t\t%f\t\t%f\n",objects[i].obj_no,objects[i].weight,objects[i].value,value);
		}
	}


}
