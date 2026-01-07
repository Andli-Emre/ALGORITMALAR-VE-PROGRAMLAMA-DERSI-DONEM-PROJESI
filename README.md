# ALGORITMALAR-VE-PROGRAMLAMA-DERSI-DONEM-PROJESI
Veli Emre Ersoy 24360859076 ALGORİTMALAR VE PROGRAMLAMA DERSİ DÖNEM PROJESİ
Güneş Sistemi Gezegenleri Uzay Simülasyonu

Bu proje, Algoritmalar ve Programlama dersi kapsamında C programlama dili kullanılarak geliştirilmiş, konsol tabanlı bir fizik simülasyonudur. Projenin amacı, Güneş Sistemi’ndeki gezegenlerin farklı yerçekimi ivmeleri altında çeşitli fizik deneylerinin sonuçlarını hesaplamak ve karşılaştırmalı olarak göstermektir.

  Proje Bilgileri

-Ders: Algoritmalar ve Programlama
            
-Programlama Dili: C

-Hazırlayan: Veli Emre Ersoy

-Öğrenci No: 24360859076

-Tarih: 07.01.2026

  Projenin Amacı

-Bu simülasyon, kullanıcıdan alınan fiziksel büyüklükleri kullanarak Güneş Sistemi’ndeki 8 gezegen için aynı deneyin farklı sonuçlar vermesini sağlamayı amaçlar. Böylece yerçekimi ivmesinin fiziksel olaylar üzerindeki etkisi gözlemlenebilir.

  Programın Çalışma Mantığı

-Kullanıcıdan Bilim İnsanı Adı alınır.

-Deney menüsü ekrana yazdırılır.

-Kullanıcı bir deney seçer.

-Deney için gerekli değerler kullanıcıdan alınır.

-Girilen değerler, gezegenlere ait yerçekimi ivmeleri kullanılarak hesaplanır.

-Sonuçlar her gezegen için ayrı ayrı ekrana yazdırılır.

-Kullanıcı -1 girene kadar program çalışmaya devam eder.

Kullanılan Gezegenler ve Yerçekimi İvmeleri
| Gezegen | Yerçekimi İvmesi (m/s²) |
| ------- | ----------------------- |
| Merkür  | 3.70                    |
| Venüs   | 8.87                    |
| Dünya   | 9.81                    |
| Mars    | 3.71                    |
| Jüpiter | 24.79                   |
| Satürn  | 10.44                   |
| Uranüs  | 8.69                    |
| Neptün  | 11.15                   |


Deneyler ve Kullanılan Formüller

Serbest Düşme Deneyi
h = ½ · g · t²

Yukarı Atış Deneyi
hₘₐₓ = v₀² / (2g)

Ağırlık Deneyi
G = m · g

Kütleçekimsel Potansiyel Enerji
Eₚ = m · g · h

Hidrostatik Basınç
P = ρ · g · h

Arşimet Kaldırma Kuvveti
Fₖ = ρ · g · V

Basit Sarkaç Periyodu
T = 2π √(L / g)

Sabit İp Gerilmesi
T = m · g

Asansör Deneyi
N = m(g + a) veya N = m(g − a)

  Teknik Özellikler

-Program modüler yapıdadır ve her deney ayrı bir fonksiyon olarak tanımlanmıştır.

-Gezegen yerçekimi ivmelerine pointer aritmetiği kullanılarak erişilmiştir.

-Negatif girişler ternary operatörü ile düzeltilmiştir.

-Menü kontrolü switch–case yapısı ile sağlanmıştır.

-Çıktılar birimleriyle ve düzenli biçimde ekrana yazdırılmıştır.

   Eksiklikler ve Geliştirme Olanakları

-Program konsol tabanlıdır, grafiksel kullanıcı arayüzü bulunmamaktadır.

-İleride grafik arayüz eklenerek kullanıcı deneyimi geliştirilebilir.

-Dosyaya yazdırma ve deney sonuçlarını kaydetme özelliği eklenebilir.

  Sonuç

Bu proje ile C programlama dilinde diziler, pointerlar, fonksiyonlar ve döngülerin birlikte kullanımı pekiştirilmiştir. Fiziksel formüllerin algoritmaya dönüştürülmesi ve modüler programlama yaklaşımı sayesinde okunabilir ve sürdürülebilir bir yazılım geliştirilmiştir.

Kaynakça

-NASA – Planetary Fact Sheet

-Kernighan, B. W., Ritchie, D. M. The C Programming Language

-Serway, R. A., Jewett, J. W. Physics for Scientists and Engineers

-Deitel, P. J., Deitel, H. M. C How to Program
