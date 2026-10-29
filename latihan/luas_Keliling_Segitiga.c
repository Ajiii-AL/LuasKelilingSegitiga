#include <stdio.h>

void LuasSegitiga(int sisi, int tinggi, int *luas);
void KelSegitiga(int sisi, int *keliling);

int main(){

    int s; 
    int t; 
    int luasSegitiga;
    int kelilingSegitiga;

    printf("Masukkan Sisi Segitiga : ");
    scanf("%d", &s);
    printf("Masukkan Tinggi Segitiga : ");
    scanf("%d", &t);

    LuasSegitiga(s, t, &luasSegitiga);
    KelSegitiga(s, &kelilingSegitiga);

    printf("luas nya adalah %d \n", luasSegitiga);
    printf("keliling nya adalah %d", kelilingSegitiga);


    return 0;
}

void LuasSegitiga(int sisi, int tinggi, int *luas){
    *luas = (sisi * tinggi) / 2;

};

void KelSegitiga(int sisi, int *keliling){
    *keliling = 3 * sisi;
}