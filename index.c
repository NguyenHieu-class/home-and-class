/*
#include<stdio.h>
int main(){
    double a =10 ,c,area,s4,v,s6;
    c = 4.0 * a;
    printf("chu vi hinh vuong c = %f\n",c);
    area = a * a;
    printf("dien tich hinh vuong area = %f\n",area);
    s4 = 4.0 * a*a;
    printf("dien tich xung quang khoi lap phuong s4 = %f\n",s4);
    s6 = 6.0 *a*a;
    printf("dien tich toan phan khoi lap phuong s6 = %f\n",s6);
    v = a*a*a;
    printf("the tich khoi lap phuong la v = %f\n",v);
}
*/
#include<stdio.h>
#include<math.h>
int main(){
    printf("________________Cach giai PTBH__________________\n");
    int a,b,c,delta;
    double x, x1, x2;
    printf("NHAP_HE_a_b_c: \n");
    scanf("%d%d%d",&a,&b,&c);
    printf("a = %d\nb = %d\nc = %d\n",a,b,c);
    printf("cach tinh delta ");
    printf("delta = b*b - 4*a*c\ndelta = ");
    delta = b*b - 4*a*c;
    printf("%d\n",delta);
    if(delta > 0){
        x1 = (b-sqrt(delta))/2*a;
        x2 = (-b-sqrt(delta))/2*a;
        printf("x1 = %f\n",x1);
        printf("x2 = %f",x2);
    }
    else if(delta == 0){
        x = -b/2*a;
        printf("x = %f",x);
    }
    else{

        printf("Phuong trinh vo nghiem");
    };
    return 0;
}