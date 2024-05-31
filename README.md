# Güçlü ve Güvenli Şifre Oluşturucu

__Daha güvenli__ hesaplar için güçlü şifrelere ihtiyacımız var. Bu yüzden bu program ile random şifreler üretip kullanabilirsiniz.

_Çeşitli_ karakterlere ve _rastgeleliğe_ sahip.

> [!IMPORTANT]
> Günümüzün dijital dünyasında, zayıf şifreler kolayca tahmin edilebilir ve hesaplarınız kötü niyetli kişilerin eline geçebilir. Güçlü şifreler, kişisel ve profesyonel bilgilerinizin güvenliğini sağlamanın ilk adımıdır.

Biraz da nasıl kodlandığı hakkında bilgi verelim.

![image](https://github.com/isleyen/randomPasswordGenerator/assets/136992260/40473ca1-f6f5-4bc3-9adb-7a61f4f32cb3)

Burada rastgele sayılar üretmek için lazım olan iki kütüphane tanımladık: "cstdlib" ve "ctime". 

![image](https://github.com/isleyen/randomPasswordGenerator/assets/136992260/0da0fdba-1e82-4af0-a09f-cb7b70cbfc33)

Burada şifrelerimizde kullanacağımız ve totalde 72 karakterden oluşan karakterler var.

![image](https://github.com/isleyen/randomPasswordGenerator/assets/136992260/35301619-b4cb-472f-92cf-17a0d1712842)

Bu kodumuz ise rastgele sayi üretiyor.

![image](https://github.com/isleyen/randomPasswordGenerator/assets/136992260/23994ea3-5d30-4255-9ece-7cacac412bde)

Kodumuzun bel kemiği bu for döngümüz. Daha detaylı inceleyelim:

Burada rastgele üretilen sayinin 72 ye göre modu aliniyor ve elde ettiğimiz sayi karakterimizden hangi sıradaki karaktere denk gelirse password'a ekleniyor ve bu for döngüsünün karakter uzunluğuna bağlı olarak devam edecek. Kullanıcı 8 karakterli bir şifre istiyorsa 8 kere dönecek.
> [!NOTE]
> Kalıp Oluşumu: std::rand() fonksiyonu belirli platformlarda çok rastgele olmayabilir. Daha güvenli ve rastgele sayı üretimi için "std::random_device" ve "std::mt19937" gibi modern C++ rastgele sayı üreticileri kullanılabilir.

En son da ana fonksiyonumuzda gerekli input ve outputları aldıktan sonra şifre oluşturan fonskiyonumuzu çağırabiliriz:

![image](https://github.com/isleyen/randomPasswordGenerator/assets/136992260/c02b9386-1e4d-4934-9b55-944c63bd6330)

Hedef Dosya: main.cpp
