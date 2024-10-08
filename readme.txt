Bubble sort merupakan metode pengurutan algoritma dengan membandingkan nilai antara data yang bersebelahan. Metode ini dilakukan dengan cara penukaran data secara terus menerus, sampai dipastikan dalam iterasi dalam pass yang tertentu tidak ada lagi perubahan/penukaran. Proses metode Bubble sort ini akan diulang beberapa kali, hingga dipastikan data terurut. Pendeskripsiannya sebagai berikut:

	- Contoh memiliki 10 elemen dalam satu array [9, 7, 8, 5, 6, 3, 11, 2, 10, 4, 1]
	- Bandingkan nilai array ke-0 dan array ke-1
	- Jika data ke-0 lebih besar dari data ke-1 maka tukar posisinya
	- Kemudian data yang lebih besar tadi dibandingkan dengan data ke-3
	- Lakukan langkah nomor 2 hingga selesai.

Mengapa kompleksitasnya O(n^2)?
	Apa itu O(n^2)? Ini merupakan sebutan untuk mengatakan bahwa, "jika kita mempunyai 100 angka, mungkin butuh sekitar 100 x 100 langkah untuk mengurutkannya, dan akan lebih drastis jika mempunyai lebih banyak angka" Dalam artian membutuhkan proses yang lama untuk mendapatkan data yang terurut. Bubble sort memilik kompleksitas algoritma O(n^2) dikarenakan melibatkan nested-loop (loop bersarang) yang membuat jumlah perbandingan dan penukaran nilai dalam array meningkat secara seiring dengan bertambahnya ukuran array. Ibaratkan punya 10 angka. Pada putaran pertama, melakukan 9 kali perbandingan. Putaran kedua, melakukan 8 kali perbandingan, dan seterusnya. Semakin panjang daftarnya, semakin banyak waktu yang diperlukan. Kesimpulannya, Bubble sort itu seperti mengurutkan daftar dengan cara bolak-balik mengecek dan menukar tempat angka. Karena setiap kali kita harus melakukan cek semua pasangan angka lagi, waktunya jadi lama, terutama kalau angkanya banyak. Itulah kenapa Bubble sort punya kompleksitas O(n^2) artinya, semakin banyak angka, semakin lama waktu yang dibutuhkan untuk menyelesaikannya.
