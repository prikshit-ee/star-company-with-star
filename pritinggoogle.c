#include<stdio.h>
int main(){
    for( int i =0 ;i<5 ; i++){
        for( int j=0 ; j<5; j++){
            if(i==0|| j==0||i==4||(i==3&&j>=2)||(i==3&&j==4)  ){
                printf("*");

            }
            else{
                printf(" ");

            }
        }
        printf("\n");

    }
  
  printf("\n");

    for( int i =0 ;i<5 ; i++){
        for( int j=0 ; j<5; j++){
if(i==0||j==0|| i==4||j==4  ){
                printf("*");
    
            
}
else{
                printf(" ");

}
}
  printf("\n");

    }
    printf("\n");

     for( int i =0 ;i<5 ; i++){
        for( int j=0 ; j<5; j++){
            if(i==0|| j==0||i==4||(i==3&&j>=2)||(i==3&&j==4)  ){
                printf("*");

            }
            else{
                printf(" ");

            }
        }
        printf("\n");

    }
  printf("\n");

     for( int i =0 ;i<5 ; i++){
        for( int j=0 ; j<5; j++){
if(j==0|| i==4 ){
                printf("*");

}else {
        printf(" ");

}
}
printf("\n");

     }
  printf("\n");

       
for(int i=0; i<5; i++){
    for( int j=0 ; j<5 ; j++){
        if(i==0||j==0|| i==2||i==4){
            printf("*");

        }else{
            printf(" ");

        }
        

    }
        printf("\n");

}


  printf("\n");




  return 0; 






}