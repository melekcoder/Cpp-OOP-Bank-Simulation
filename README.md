# C++ OOP Banka Hesap Simülasyonu

Bu proje, C++ ile Nesne Yönelimli Programlama (OOP) temel konseptlerinden **Kalıtım (Inheritance)** ve **Çok Biçimlilik (Polymorphism)** kullanılarak geliştirilmiş basit bir banka hesap yönetim sistemidir.

#  Özellikler

* **Temel Sınıf Yapısı (Base Class):** `BankaHesabi` sınıfı üzerinden hesap numarası ve bakiye tutulur; standart para yatırma ve çekme işlemleri tanımlanır.
* **Kalıtım (Inheritance):** `VadeliHesap` sınıfı, temel `BankaHesabi` sınıfından türetilmiştir.
* **Çok Biçimlilik (Polymorphism):** Temel sınıftaki `paraCek` metodu, `virtual` anahtar kelimesiyle tanımlanmış ve `VadeliHesap` sınıfında `override` edilerek baştan yazılmıştır.
* **Özel İşlem Kuralları:** Vadeli hesaptan para çekilmek istendiğinde, sistem otomatik olarak **%5 vade bozma cezası** hesaplar ve bakiyeden düşer.

#  Kullanılan Teknolojiler

* C++ (Standart Kütüphaneler: `<iostream>`, `<string>`)
* Nesne Yönelimli Programlama (OOP)

# Kurulum ve Çalıştırma

Projeyi derlemek ve çalıştırmak için sisteminizde bir C++ derleyicisi (ör. GCC) bulunmalıdır.

1. Depoyu bilgisayarınıza klonlayın veya indirin.
2. Terminali açarak kodun bulunduğu dizine gidin.
3. Kodu derlemek için aşağıdaki komutu çalıştırın:
   ```bash
   g++ main.cpp -o BankaUygulamasi
