#include <stdio.h>
#include <stdlib.h>

int main(){

int n;

menu :
puts("TUGAS ASD");
puts("1. Level 1");
puts("2. Level 2");
puts("3. Level 3");
puts("4. Exit");
printf("pilih menu :");
scanf("%d", &n);

system("cls");
switch(n){

    case 1 : {

        int i, j, batas, n;
            printf("masukan indeks :");
            scanf("%d", &n);

            for(i=0;i<=n;i++){
                batas=i;
                for(j=0;j<=i;j++){
                    printf("%3d", batas);
                    batas++;
                }
                printf("\n");
            }
            system("cls");
            goto menu;
            break;
    case 2 : {

  int tinggi,i,j;

  printf("Input tinggi segitiga: ");
  scanf("%d",&tinggi);

  printf("\n");

  for(i=1; i<=tinggi; i++) {
    for(j=1; j<=i; j++) {
      printf("%3d ",i*j);
    }
    printf("\n");
  }
  system("cls");
    goto menu;
  return 0;
}

 break;

            }
    case 3 : {

            int isi,batas,bil,temp,temp2,kir,kan,seg1,seg2,seg3,seg4,spas1,spas2;

//clrscr();
printf("Masukan Bilangan: ");
scanf("%d",&bil);
isi=bil-1;
temp=isi;
temp2=isi;
for (batas=1;batas<=isi;batas++){
//SEGITIGA KIRI ATAS/
for (spas1=isi;spas1>=batas;spas1--)
printf("%s"," ");
for (seg1=1;seg1<=batas;seg1++)
printf("%d",seg1);
//SEGITIGA KANAN ATAS/
for (seg2=batas-1;seg2>=1;seg2--)
printf("%d",seg2);
printf("\n");
}
//TENGAH/
for(kir=1;kir<=bil;kir++)
printf("%d",kir);
for(kan=bil-1;kan>=1;kan--)
printf("%d",kan);
printf("\n");

for (batas=1;batas<=isi;batas++){
//SEGITIGA KIRI BAWAH/
for (spas2=1;spas2<=batas;spas2++)
printf("%s"," ");
for (seg3=1;seg3<=temp;seg3++)
printf("%d",seg3);temp=temp-1;
//SEGITIGA KANAN BAWAH/
for (seg4=temp2-1;seg4>=1;seg4--)
printf("%d",seg4);temp2=temp2-1;
printf("\n");
}
getch();
}
system("cls");
goto menu;
break;

    }

}



