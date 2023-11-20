
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int row,col,sum,product=1,answer,max,min,avg,i,maxTemp;
	int temp[100];
	int trueAnswer=answer-1;
	int a[100][100];
	printf("Nhap so hang:");
	scanf("%d",&row);
	printf("Nhap so cot:");
	scanf("%d",&col);
	do{
		printf("MENU\n");
		printf("1.Nhap gia tri cac phan tu cua mang\n");
		printf("2.In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3.In ra cac gia tri le va tinh tong\n");
		printf("4.In ra cac phan tu nam tren duong bien va tinh tich\n");
		printf("5.In ra cac phan tu nam tren duong cheo va tinh tong\n");
		printf("6.In ra cac gia tri lon nhat va nho nhat trong mang\n");
		printf("7.Tinh gia tri trung binh cua cac phan tu trong mang va thong ke co bao nhieu phan tu co gia tri bang gia tri trung binh\n");
		printf("8.In ra dong co tong gia tri cac phan tu la lon nhat\n");
		printf("9.Thoat\n");
		int choice;
		printf("Moi ban nhap lua chon:");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				for(int i=0;i<col;i++)
    			{
        			for(int j=0;j<row;j++)
        			{
        				scanf("%d",&a[i][j]);
        		}
    		}
    			break;
    		case 2:
    			for(int i=0;i<col;i++)
    			{
    				for(int j=0;j<row;j++)
    				{
    					printf("%d\n",a[i][j]);
				}
			}
				break;
			case 3:
				printf("Cac so le trong mang:");
				for(int i=0;i<col;i++)
    			{
    				for(int j=0;j<row;j++)
    				{
    					if(a[i][j]%2==1){
    						printf("%d\n",a[i][j]);
    						sum+=a[i][j];
						}
				}
			}
				printf("Tong cac so le:%d\n",sum);
				break;
			case 4:
				for(int i=0;i<col;i++)
				{
					for(int j=0;j<row;j++)
					{
						if(i==0 || i==col-1){
							printf("%d\n",a[i][j]);
							product*=a[i][j];
						}else{
							printf("%d\n",a[i][0]);
							product*=a[i][0];
							printf("%d\n",a[i][row-1]);
							product*=a[i][row-1];
						}
					}
				}
				printf("Tich:%d\n",product);
				break;
			case 5:
				printf("Ban muon in ra va tinh tong o duong cheo bao nhieu:");
				scanf("%d",&answer);
				
				for (int i=0;i<col;i++)
				{
					printf("%d\n",a[i][trueAnswer+i+1]);
					sum+=a[i][trueAnswer+i+1];
					for(int j=0;j<row;j++)
					{
					}
				}
				printf("Tong hang cheo:%d\n",sum);
				break;
			case 6:
				max= a[0][0];
				min= a[0][0];
				for(int i=0;i<col;i++)
				{
					for(int j=0;j<row;j++)
					{
						if(max<a[i][j]){
							max = a[i][j];
						}
					}
				}
				for(int i=0;i<col;i++)
				{
					for(int j=0;j<row;j++)
					{
						if(min>a[i][j]){
							min=a[i][j];
						}
					}
				}
				printf("Max:%d\n",max);
				printf("Min:%d\n",min);
				break;
			case 7:
				for(int i=0;i<col;i++)
				{
					for(int j=0;j<row;j++)
					{
						sum+=a[i][j];
					}
				}
				avg=sum/(col*row);
				printf("Trung binh cong:%d\n",avg);
				printf("Cac so bang tbc:");
					for(int i=0;i<col;i++)
				{
					for(int j=0;j<row;j++)
					{
						if(a[i][j]=avg){
							printf("%d\n",a[i][j]);
						}
					}
				}
				break;
			case 8:
				temp[-1]=0;
				max=temp[i];
				for(i=0;i<col;i++)
			{
				for(int j=0;j<row;j++)
				{
					sum+=a[i][j];
				}
					temp[i]=sum;
					printf("Sum %d\n",sum);
					printf("%d\n",temp[i]);
					sum=0;
					if(temp[i]>temp[i-1]){
						max=temp[i];
					}
					printf("Max %d\n",max);
			}
					for(int i=0;i<col;i++){
						if(temp[i]==max){
							printf("Hang co tong gia tri lon nhat:\n");
							for(int j=0;j<row;j++){
								printf("%d\n",a[i][j]);
					}
				break;
			case 9:
				exit(0);
	}
}
}
	}while(1==1);
}