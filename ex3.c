/*
Viết chương trình nhập vào một số a bất kỳ và in ra giá trị a2, a3, a4
/*
Viết chương trình đọc từ bàn phím 3 số nguyên biểu diễn ngày, tháng, năm và xuất ra màn hình dưới dạng “dd/mm/yyyy”.
/*
Viết chương trình đọc và 2 số nguyên và in ra kết quả của phép (+), phép trừ (-), phép nhân (*), phép chia (/). Nhận xét kết quả chia 2 số nguyên
/*
Viết chương trình nhập vào bán kính hình cầu, tính và in ra diện tích, thể tích của hình cầu đó. Hướng dẫn: S = 4πR2 và V = (4/3)πR3.
/*
Nhập vào một số là số giây, đổi số giây này ra giờ phút giây và xuất theo dạng gio:phut:giay, mỗi thành phần có 2 chữ số. Ví dụ 3661 = 01:01:01.

/*
Viết chương trình nhập vào thông tin của 2 sinh viên (tên, quê quán, năm sinh), sau đó in tất cả thông tin của 2 sinh viên này ra màn hình. Ví dụ như bên dưới đây:

Nhap thong tin sinh vien 1:
-Ten: Nguyen Manh Hai
-Que quan: Hai Duong
-Tuoi: 18
Nhap thong tin sinh vien 2:
-Ten: Tran Duc Anh
-Que quan: Ha Noi
-Tuoi: 20

Cac sinh vien da nhap vao:
*-----------------------------------------------*
|         Ten                  |   Que quan   |   Tuoi   |
*-----------------------------------------------*
| Nguyen Manh Hai | Hai Duong    | 18       |
  -----------------------------------------------
| Tran Duc Anh         | Ha Noi         | 20        |
*-----------------------------------------------*

*/



#include<stdio.h>
#include<string.h>
#include<conio.h>

void songuyena(){
    int a;
    printf("ENTER A: a= ");
    scanf("%d",&a);
    int m = a;
    for(int i=2;i<=4;i++){
        a = a*m;
        printf("GIA TRI A^%d = %d\n",i,a);
    };

};
void ddmmyy(){
    int time[10];
    printf("ENTER DAY/MONTH/YEAR\n");
    while (1<2)
    {
        for(int i=0;i<=2;i++){
            switch (i)
            {
            case 0:
                printf("ENTER DAY dd: ");
                scanf("%d",&time[i]);
                printf("%d",time[i]);
                break;
            case 1:
                printf("ENTER DAY mm: ");
                scanf("%d",&time[i]);
                break;
            case 2:
                printf("ENTER DAY yy: ");
                scanf("%d",&time[i]);
                break;
            default:
                break;
            };
        };
        printf("%.2d/%.2d/%.4d",time[0],time[1],time[2]);
        break;
    };
};

void kiem_tra_so_nguyen(){

    int a,b;
    printf("ENTER VARIABLE a AND b: ");
    scanf("%d%d",&a,&b);
    for(int i=0;i<=3;i++){
        switch (i){
            case 0:
                printf("a + b = %d\n",a+b);
                break;
            case 1:
                printf("a - b = %d\n",a-b);
                break;
            case 2:
                printf("a * b = %d\n",a*b);
                break;
            case 3:
                printf("a / b = %d\n",a/b);
                //nếu phép chia có dư kết quả in ra là phần nguyên  
                break;
        };

    };

};
void cau(){
    float pi = 3.14;
    float r;
    printf("ENTER r: ");
    scanf("%f",&r);
    float sq = 4*pi*r*r , v = (4/3)*pi*r*r*r;
    printf("DIEN TICH MAT CAU: %.6g\nTHE TICH KHOI CAU: %1.3f",sq,v);

};

void time(){
    int sec,min=0,hr=0;
    printf("ENTER SECOND: sec = ");scanf("%d",&sec);
    hr = sec/360;
    sec = sec - hr*360;
    min = sec/60;
    sec = sec - min*60;
    printf("TIME\nhr:min:sec\n%.2d:%.2d:%.2d",hr,min,sec);

};

void sinh_vien(){
    char fname[] = "text.csv";
    char name[100];
    char address[50];
    int age[20];
    
    FILE *fp = NULL;
    fp = fopen(fname,"r+");

    while(fscanf(fp,"%[^,],%s,%s,%d",name,address,&age)!=EOF){
        printf("%s-%s-%d\n",name,address,age);
    };

    fclose(fp);


};


// char command[50];
// strcpy(command, "dir" );
// system(command);


int main(){
    //songuyena();
    //ddmmyy();
    //kiem_tra_so_nguyen();
    //cau();
    //time();
    sinh_vien();
    
    return 0;
}



