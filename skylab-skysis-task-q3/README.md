

Struct yapıları ve fonksiyon prototipleri kullanarak veri ve fonksiyonları nasıl organize edebiliriz: Encapsulation.


    Bazen verilerin güvenliği açısından programın verilere doğrudan erişilmeyecek şekilde yazılması gerekebilir. Bunu yaparken de kapsülleme mantığından yararlanılır.  

    Struct değişkenleri, tanımlarına main() fonksiyonunun erişimi engellenerek gizli tutulabilir. Bunu yapmak için verilerin tanımları bir “private” source dosyasında bulunur. Struct fonksiyonlarla bu veriler üzerinde okuma/yazma işlemleri yapılır. Bir header dosyası yardımıyla da bu struct yapıları main source dosyasına eklenir, böylelikle bu yapılara erişim sağlanır.  

Bunu bir örnek üzerinden inceleyebiliriz, aşağıda 3 farklı dosya verilmiştir: 

AccountPrivate.c  (private source dosyası) 

AccountPrivate.h (header dosyası) 

AccountMain.c (main dosya) 

    Burada oluşturulan header dosyası main source dosyasında private source dosyasının içerisindeki fonksiyonların kullanılabilmesini sağlar.

    Fakat verilere erişim sağlanamaz, çünkü header dosyasındaki her şey yanlızca bir ön bildirim işlevi görür.

