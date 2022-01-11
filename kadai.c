#include <stdio.h>
#include <math.h>

int main(){
	int rika[20] = {65,80,67,35,58,60,72,75,68,92,36,50,25,85,46,42,78,62,84,70};
	int ein[20]={44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84};
	int i;
	int sum1=0,sum2=0;
	double hen1,hen2;
	int avg1,avg2;
	for(i=0;i<20;i++){
		sum1 += rika[i];
		sum2 += ein[i];
		hen1 += pow((rika[i]-avg1),2.0);
		hen2 += pow((ein[i]-avg2),2.0);
	}

	printf("理科合計点 : %d\n",sum1);
	printf("英語合計点 : %d\n",sum2);
	avg1 = sum1/20;
	avg2 = sum2/20;
	printf("理科平均 : %d\n",avg1);
	printf("英語平均 * %d\n",avg2);

	hen1 = sqrt(hen1/20);
	hen2 = sqrt(hen2/20);

	printf("理科偏差 : %lf\n",hen1);
	printf("英語偏差 : %lf\n",hen2);

	for(i=0;i<20;i++){
	printf("%d人目理科の偏差値 : %lf\n",i + 1,(rika[i]-avg1)/hen1*10+50);
	printf("%d人目英語の偏差値 : %lf\n",i + 1,(ein[i]-avg2)/hen2*10+50);
	}
	//バブル
	int k,tmp;
	for(i=0;i<20;i++){
		for(k=19;k>=i+1;k--){
			if(rika[k]>rika[k-1]){
				tmp = rika[k];
				rika[k] =rika[k-1];
				rika[k-1] = tmp;
			}
		}
	}
	printf("理科 = ");
	for(i=0;i<20;i++){
		printf("%d ",rika[i]);
	}
	return 0;
}
