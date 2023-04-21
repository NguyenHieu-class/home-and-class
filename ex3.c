#include<stdio.h>
#include<math.h>

// int bai11(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     for(int i=a;i<=b;i++){
//         int count = 0;
//         int sq = sqrt(i);    
//         for(int j=i;j>=a;j--){
//             if(i%j==0){
//                 count++;
//             };
//         };
//         if( count == 2 || sq * sq == i){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// };

// int bai12(){
//     int n;
//     int sum =0;
//     scanf("%d",&n);
//     for(int i=1;i<n;i++){
//         if(sqrt(i) == (int)sqrt(i)){
//             sum +=i;
//         };
//     };
//     printf("%d",sum);
//     return 0;
// };

// int bai13(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     int sl =0;
//     for(int i=a;i<=b;i++){
//         int count =0;
//         for(int j=i;j>=a;j--){
//             if(i%j == 0){
//                 count++;
//             };
//         }
//         if(count >= 3){
//             sl++;
//         }
//     }
//     printf("%d",sl);
//     return 0;
// }

// int bai14(){

//     int c,d;
//     float a,b;
//     scanf("%f%f",&a,&b);
//     scanf("%d%d",&c,&d);
    
//     for(int i=(int)a;i<=(int)b;i++){
//         if(i%c ==0 && i%d != 0 && i>0){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }
// int bai15(){

//     int a,b;
//     scanf("%d%d",&a,&b);

//     for(int i=a;i<=b;i++){
//         int s1 = i/100;
//         int s2 = i%100;
//         if(s2*2 == s1){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }

// int bai16(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     for(int x=1;x<=a+b;x++){
//         for( int y=1;y<=a+b;y++){
//             if(x*y<=a*b && x+y == a+b){
//                 printf("%d %d\n",x,y);
//             }
//         }
//     }
//     return 0;
// }

// int bai21(){
//     int n;
//     scanf("%d",&n);
//     float sum =0;

//     for(int i=1;i<=n;i++){
//         int ts =1;
//         int ms =i*i;

//         for(int j=1;j<=2*i;j++){
//             ts *=j;
//         };
//         sum += (float)ts/(float)ms;
//     }
//     printf("%.3f",sum);
//     return 0;
// }

// int bai22(){
//     int n;
//     scanf("%d",&n);
//     float sum =0;
//     for(int i=1;i<=n;i++){
//         int ts =2*i*(2*i+2);
//         int ms =i*i;
//         sum += (float)ts/(float)ms;
//     }
//     printf("%.3f",sum);
//     return 0;
// }

// int bai23(){
//     int n;
//     scanf("%d",&n);
//     float sum =0;
//     for(int i=1;i<=n;i++){
//         int ts =0;
//         float ms =0;
//         int check_ms=1;
//         for(int j=1;j<=i;j++){
//             ts +=j;
//             check_ms *=j;
//             ms = sqrt(check_ms);
//         };
//         sum += (float)ts/ms;
//     }
//     printf("%.3f",sum);
//     return 0;
// }

// int bai34(){
//     int n;
//     scanf("%d",&n);
//     float sum =1.0;
//     for(int i=1;i<=n;i++){
//         float ms = sqrt(i);
//         float ts = 1;
//         for(int j=1;j<=i;j++){
//             ts += 1.0/(1.0 + j);
//         };
//         sum += ts/ms;
//     };
//     printf("%.3f",sum);
//     return 0;
// }