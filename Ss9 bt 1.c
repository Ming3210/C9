#include <stdio.h>
#include <stdlib.h>
int main()
{
	int count,sum,max,min,m,n,number,index;
	int perfect=0;
	int nums[count];
	int findNumbers[m];
	int numbers[count];
	do{
		int choice;
		printf("MENU\n");
		printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2.In ra cac gia tri cac phan tu dang quan li\n");
		printf("3.In ra cac gia tri cac phan tu chan va tinh tong\n");
		printf("4.In ra gia tri lon nhat va nho nhat trong mang\n");
		printf("5.In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
		printf("6.Nhap vao 1 so va thong kia trog mang co bao nhieu phan tu co gia tri nhu vay\n");
		printf("7.Them 1 phan tu vao vi chi chi dinh\n");
		printf("8.Thoat\n");
		printf("Chon tu 1 - 8 :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("So phan tu:");
				scanf("%d",&count);
			   {
			   int nums[count];
			   }
				for(int i=0;i<count;i++){
					printf("num[%d]=",i);
					scanf("%d",&nums[i]);
				}
				break;
			case 2 :
				printf("Cac phan tu co trong mang:\n");
				for(int i = 0;i<count;i++){
					printf("%d\n",nums[i]);
				}
				break;
			case 3:
				printf("Cac phan tu chan:\n");
				for(int i = 0;i<count;i++){
					if(nums[i]%2==0){
					printf("%d\n",nums[i]);
					sum+=nums[i];
				}
			}
				printf("Tong:%d\n",sum);
				break;
			case 4:
				for(int i=count; i>=0;i--){
					if(nums[i]>nums[i+1]){
						max=nums[i];
					}
				}
				printf("Max:%d\n",max);
				for(int i = count; i>=0;i--){
					if(nums[i]<nums[i+1]){
						min=nums[i];
					}
				}
				printf("Min:%d\n",min);
				break;
			case 5:
				for(int i=0;i<count;i++){
					perfect =0;
					printf("%d\n",nums[i]);
					for(int j=nums[i];j >0;j--){
						if(nums[i] %j ==0){
						perfect++;
					}
				}
					if(perfect==2){
						printf("So nguyen to:%d\n",nums[i]);
						sum+=nums[i];
					}
					printf("Tong la:%d",sum);
				}
				break;
			case 6:
				printf("Nhap so phan tu findNumber:");
				scanf("%d",&m);
		        {
				int findNumbers[m];}
				for(int i=0;i<m;i++){
				  printf("findNumbers[%d]=",i);
				  scanf("%d", &findNumbers[i]);
				}
				for (int i = 0; i <count; i++){
					for(int j=0;j<m;j++){           
						if(findNumbers[j] == nums[i]){
							printf("Gia tri findNumber:%d\n",findNumbers[j]);
						}
					}
			}
			case 7:
				printf("Nhap phan tu them:");
				scanf("%d",&number);
				printf("Nhap thu tu muon them");
				scanf("%d",&index);
				if(index <= 0){
					index=0;
				  }
				if(index >= count){
					index = count;
				}
				for(int i=count;i>index;i--){
					numbers[i]=numbers[i-1];
				}
				numbers[index]=number;
				count++;
				  printf("Gia tri cac phan tu trong mang:\n");
				for (int k= 0; k < count; k++){ 
				  printf("%d\n", numbers[k]);
				}
				break;
			case 8:
				exit(0);
				break;
			default:
				printf("Nhap tu 1 - 8 :\n");
				break;
		}
	}while("Nhap tu 1 - 8 :\n");
}