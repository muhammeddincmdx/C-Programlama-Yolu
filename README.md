# C Programlama Yolu


Not: Kod örnekleri ve yazıları kendi anladığımca C for Embedded System Ir.Sofie Beeren Kitabından aldım.
Gelecekte kitapta geçen bazı bilgilerin görsellerini ekleyebilirim. Belki de eklemem.
Kod kısımları hem readme.md dosyasında hem de repository kısmında paylaşılmıştır.

code1
````
#include <stdio.h>

int main() {
    
    printf("Hello world");

    return 0;
}
/*
Hello,world
*/

````


What is stdio library?
---
stdio.h, C programlama dilinde giriş/çıkış (I/O) işlemleri için kullanılan en temel kütüphanelerden biridir. Standart Giriş/Çıkış Kütüphanesi anlamına gelen bu kütüphane, klavyeden veri okuma, ekrana veri yazdırma, dosya okuma ve yazma gibi temel işlemleri gerçekleştirmeye yarayan fonksiyonlar içerir.

stdio.h kütüphanesinin bazı önemli özellikleri şunlardır:

    Giriş/çıkış akışları: Kütüphane, klavyeden veri okuma ve ekrana veri yazdırma gibi işlemler için standart giriş (stdin) ve standart çıkış (stdout) olmak üzere iki akış tanımlar. Ayrıca dosyalara veri okuma ve yazma için dosya akışları da kullanılabilir.
    Biçimlendirme: Kütüphane, printf() ve scanf() gibi fonksiyonlar aracılığıyla verilerin ekrana nasıl yazdırılacağını ve klavyeden nasıl okunacağını biçimlendirmeye imkan verir.
    Dosya işlemleri: Kütüphane, dosya açma, kapama, okuma, yazma ve silme gibi işlemleri gerçekleştirmeye yarayan fonksiyonlar içerir.
    Hata işleme: Kütüphane, giriş/çıkış işlemleri sırasında oluşabilecek hataları kontrol etmeye ve hata mesajları üretmeye yarayan fonksiyonlar içerir.

stdio.h kütüphanesinde yer alan bazı önemli fonksiyonlar:

    printf(): Ekrana veri yazdırmak için kullanılır.
    scanf(): Klavyeden veri okumak için kullanılır.
    fopen(): Bir dosya açmak için kullanılır.
    fclose(): Bir dosyayı kapatmak için kullanılır.
    fread(): Bir dosyadan veri okumak için kullanılır.
    fwrite(): Bir dosyaya veri yazmak için kullanılır.
    fseek(): Bir dosyadaki belirli bir konuma gitmek için kullanılır.
    ftell(): Bir dosyadaki mevcut konumu belirlemek için kullanılır.
    remove(): Bir dosyayı silmek için kullanılır.


C  programlamada # ile başlayan her satır önişlemciye verilen direktifleri tarif eder.


Tüm c programları bir veya birden fazla fonksiyon içerir. Bunlar genel olarak şu formdadır.

````
int main(void){}
````
burada void yerine varsa alınan parametreler yazılır ve int ile fonksiyonun hangi türde veri döndürdüğü ifade edilir.
fonksiyon içeriği süslü parantezlerin içerisinde belirtilir.

genellikle kod sonunda kullanılan return 0; kısmı ana fonksiyonun bittiğini belirtir.


code2: 10 mili kilometreye çeviren kod örneği.

````
#include<stdio.h>

int main(void){
    
    float km,miles;
    miles = 10.0;
    km = miles*1.609;
    printf("%f miles is equal to %f kilometers ",miles,km);
    
}


/*
OUTPUT
10.000000 miles is equal to 16.090000 kilometers 
*/

````

aynı tipteki verileri tek bir satırda türlerini belirterek tanımlayabiliriz.

burada miles ve km değerlerini float olarak tanımladık. Float ondalıklı sayıları temsil eder.

bu kodda öncelikle bilinmesi gereken şey 1 milin 1.609 km'ye eşit olduğudur. bu tanımlar yapıldıktan sonra printf ile terminale yazdırma gerçekleştirilmiştir.
%f olmasının sebebi float olduğunu belirtir ve sıra ile değişkenlere referans verilmiştir.

|   |   |
|---|---|
| float km,miles; | değişken tanımları|
| miles = 10; km=miles*1.609;| değer atama|
| printf("%f...%f..",miles,km) | printf standart fonksiyonları |
|   |   |


# Değişken Tanımlamarı

bir değişken tanımlanacağında genel format

değişken tipi değişken adı = değişken değeri;
olacak şekilde kullanılır. 

Code 3: Kullanıcıdan mil değeri isteyip km'ye dönüştüren kod yazma
burada öncelikle amaç kullanıcıdan girdi(input) alma mantığını kavramaktır.
bunun için scanf ve birkaç fonksiyon kullanılıyor. 


````


int main(void){
    
    float km,miles;
    
    km = miles*1.609;
    printf("enter a mile value: \n");
    scanf("%f",&miles);
    
    km = miles*1.609;
    printf("%f miles is equal to %f kilometers ",miles,km);
    
}


/*
OUTPUT
enter a mile value: 
10
10.000000 miles is equal to 16.090000 kilometers 
*/
````

kod satırları genel olarak yukarıdan aşağı olarak çalışır (aşağıda yazılıp yukarıda çağırılan fonksiyonlar hariç)

bu kodda öncelikle km ve miles değişkenlerinin türünü atadık ve kullanıcıdan bir mil değeri girmesini istedik. Girilen değeri scanf ile miles değişkenine float olarak atadık.
sonrasında değer atama ve printf ile gösterimi gerçekleştirdik.

Code 4: Kullanıcıdan 2 adet girdi alıp bunlar arasında temel işlemleri gerçekleştiren kod 


````
#include<stdio.h>

int main(void){
    int a,b,sum,difference;
    printf("Enter two integer: \n");
    scanf("%d%d",&a,&b);
    sum = a+b;
    difference = a-b;
    printf("a = %d\nb=%d\nsum =%d\ndifference=%d",a,b,sum,difference);
    return 0;
}
/*
OUTPUT:
Enter two integer: 
10
20
a = 10
b=20
sum =30
difference=-10
*/
````

Code 5: en büyük ortak böleni bulan kod

````
#include<stdio.h>

int main(void){
    long int a,b;
    long int x,y,kalan;
    printf("Ortak en buyuk bolen bulma\n");
    printf(" iki adet sayi giriniz: \n");
    scanf("%ld%ld",&a,&b);
    if(a<b){
        x= a;
        y = b;
    }else{
        x=b;
        y=a;
    }
    kalan= x;
    while(kalan!=0){
        kalan = y%x;
        y=x;
        x=kalan;
    }
    printf("EBOB(%ld,%ld)=%ld\n",a,b,y);
    return 0;
}
/*
OUTPUT:
Ortak en buyuk bolen bulma
 iki adet sayi giriniz: 
45465456
45
EBOB(45465456,45)=3
*/
````

Burada öncelikle kod karışık gelebilir.
Öncelikle long int kısmını açıklayalım int tam sayıların türüyken long int büyük tam sayıları depolamak için kullanılır ve %ld ile referans edilir. burada ld long decimal olarak düşünülebilir.

kodun çalışma mantığı:
öncelikle kullanıcıdan long int tipinde 2 sayı alıp bunlar arasında hangisi daha büyük karşılaştırması yapıyoruz. Bunu yaparken if else şartlarını kullandık. Bu şart blokları şöyledir 

eğer(a>b) ise{buradaki işlemi yap}else{ilk durumun tam tersi ise buradaki işlemi yap}

burada hangi sayı büyük hangisi küçük onu belirledikten sonra while döngüsünde büyük sayıyı sürekli küçüğe bölüp kalanı kontrol ediliyoruz.

Mod mantığında çalışan % ifadesi 10%3 gibi bir kullanımda 1 verir çünkü 10 sayısını 3 e bölünce 1 kalır.

while gibi çeşitli döngüler birçok programlama dilinde temel döngülerdir koddaki yazımı değişse de mantık olarak aynıdır.

while(buradaki şart sağlanana kadar){bu işlemi sürekli yap}

bizim kodumuzdaki whileda istenen şart kalanın sıfır olduğu kısımdır kalan sıfır olunca while döngüsü biterek printf kısmı terminale yazdırılır.
