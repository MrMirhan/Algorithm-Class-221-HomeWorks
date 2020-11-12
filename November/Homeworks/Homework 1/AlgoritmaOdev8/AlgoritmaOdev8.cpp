// AlgoritmaOdev8.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int i, j, count = 1, b = 0;
	cout << "İlk 25 asal sayı:\n" << "2";

	for (i = 3; i > 0; ++i)
	{
		for (j = 2; j <= i / 2; ++j)
		{
			if (i % j == 0) {
				b = 1;
				break;
			}
		}

		if (b == 0)
		{
			cout << "\n" << i;
			count++;
		}

		b = 0;
		if (count == 25)
			break;
	}
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
