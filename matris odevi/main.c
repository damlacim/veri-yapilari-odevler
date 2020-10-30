#include <stdio.h>
#include <stdlib.h>

//Veri yapýlarý dersi için matris ödevi

int main() {
	
	float array[5][5]={0.00,0.71,5.66,3.61,4.24,0.71,0.00,4.95,2.92,3.54,5.66,4.95,0.00,2.24,1.41,3.61,2.92,2.24,0.00,1.00,4.24,3.54,1.141,1.00,0.00};
	
	
	int i,j,k;
	float toplam = 0.0;
	

	
	for(i=0;i<5;i++){
		
		for(j=0;j<5;j++){
			
				
				printf("%.2f   ",array[i][j]);
						
		}
		
		printf("\n");
			
	}
	
	printf("\n\n\n");
	
	printf("Matristeki sayilarin toplami:\n"); 	//matristeki elemanlarýn toplamý
	
	//elemanlarý satýr satýr topladým
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			
			toplam= array[i][j] + toplam ;	
		}
		
		printf("%d. satirin toplami:");	
		printf("%.2f\n",toplam);
	}
	
	
	
	
	

	
	
		

}
